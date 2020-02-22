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
	inline void operator()(T* p) const
	{
		cout << "delete" << endl;
		delete p;
	}
};

// 배열모양을 위한 부분 전문화
template<typename T> struct xdefault_delete<T[]>
{
	inline void operator()(T* p) const
	{
		cout << "delete[]" << endl;
		delete[] p;
	}
};


template<typename T, typename D = xdefault_delete<T> >
class xunique_ptr
{
	T* obj;
public:
	xunique_ptr(const xunique_ptr&) = delete;
	void operator=(const xunique_ptr&) = delete;
public:
	inline explicit xunique_ptr(T* p = 0) : obj(p) {}
	inline ~xunique_ptr() { D()(obj); }
	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
};


// 배열을 위한 부분전문화, 부분 전문화시 디폴트 값은 표시 하지 않는다.
template<typename T, typename D>
class xunique_ptr<T[], D> 
{
	T* obj; // int* obj
public:
	xunique_ptr(const xunique_ptr&) = delete;
	void operator=(const xunique_ptr&) = delete;
public:
	inline explicit xunique_ptr(T* p = 0) : obj(p) {}
	inline ~xunique_ptr() { D()(obj); }


	// 배열 부분전문화 버전은 []도 제공한다.
	inline T& operator[](int index) { return obj[index]; }

	// *와 ->가 있어도 되지만 C++ 표준에서는 제거하기로 했다.
	//inline T* operator->() { return obj; }
	//inline T& operator*() { return *obj; }
};

int main()
{
	xunique_ptr<int> p1(new int);

	xunique_ptr<int[]> p2(new int[10]); // 

	p2[0] = 3; // ok
	//*p2 = 3; // error

}








;