// 9_�����������Ʈ������

#include <iostream>
using namespace std;

// �ڿ� ���� ��å�� ���� �Լ� ��ü
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

// �迭����� ���� �κ� ����ȭ
template<typename T> struct xdefault_delete<T[]> 
{
	inline void operator()(T* p) const
	{
		cout << "delete[]" << endl;
		delete[] p;
	}
};


template<typename T, typename D = xdefault_delete<T> > class xunique_ptr
{
	T* obj; // int[]* obj;
public:
	xunique_ptr(const xunique_ptr&) = delete;
	void operator=(const xunique_ptr&) = delete;
public:
	inline explicit xunique_ptr(T* p = 0) : obj(p) {}

	inline ~xunique_ptr() {	D()(obj);	}
	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
};

int main()
{
	xunique_ptr<int> p1(new int);
	xunique_ptr<int[]> p2(new int[10]); // error






//	xunique_ptr<int, Freer> p2((int*)malloc(100));
	//xunique_ptr<int, ArrayDelete<int> > p3(new int[10]);

}








;