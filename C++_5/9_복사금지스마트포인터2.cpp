// 9_복사금지스마트포인터

#include <iostream>
using namespace std;

// 자원 해지 정책을 담은 함수 객체
struct Freer
{
	inline void operator()(void* p) const
	{
		cout << "free" << endl;
		free(p);
	}
};

template<typename T> struct xdefault_delete
{
	// 주의 void*로 delete하면 소멸자 호출안됩니다.
	inline void operator()(T* p) const
	{
		cout << "delete" << endl;
		delete p;
	}
};

template<typename T, typename D = xdefault_delete<T> > class xunique_ptr
{
	T* obj;
public:
	xunique_ptr(const xunique_ptr&) = delete;
	void operator=(const xunique_ptr&) = delete;
public:
	inline explicit xunique_ptr(T* p = 0) : obj(p) {}
	
	inline ~xunique_ptr() 
	{
	//	D d;
	//	d(obj); // 함수객체 이므로 결국 inline 치환 됩니다.
		D()(obj);
	}



	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
};

int main()
{
	// 삭제자의 전달은 함수 객체를 템플릿 인자로 전달.
//	xunique_ptr<int, xdefault_delete<int> > p1(new int);

	xunique_ptr<int> p1(new int);

	xunique_ptr<int, Freer> p2((int*)malloc(100)); 

//	shared_ptr<int> p1(new int);
//	shared_ptr<int> p2(new int, foo);
}








;