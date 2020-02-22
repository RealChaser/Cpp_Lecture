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


// �迭�� ���� �κ�����ȭ, �κ� ����ȭ�� ����Ʈ ���� ǥ�� ���� �ʴ´�.
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


	// �迭 �κ�����ȭ ������ []�� �����Ѵ�.
	inline T& operator[](int index) { return obj[index]; }

	// *�� ->�� �־ ������ C++ ǥ�ؿ����� �����ϱ�� �ߴ�.
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