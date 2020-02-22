// 6_����Ʈ������ - 159 page
#include <iostream>
using namespace std;
// 1. template ���� ������ �Ѵ�.

// 2. ���� ���� ������ �ذ��ؾ� �Ѵ�.

//    A. ���� ����  : ����Ʈ������ ���鶧�� ���� ������.
//    B. ���� ���  : ���� �θ� ���. shared_ptr<>
//    C. ������ ����: �θ� ���. ??
//    D. ���� ����  : �θ� ���. ??

template<typename T> class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	~Ptr() { delete obj; }
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};

int main()
{
	Ptr<int> p = new int;
	*p = 10;
	cout << *p << endl;

	Ptr<int> p2 = p; // ���� ����
}







