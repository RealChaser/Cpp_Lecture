// 5_reference_wrapper3
#include <iostream>
using namespace std;

// ������ ����ȯ ������ ������ ��Ȱ�� ��ü.

template<typename T> class xreference_wrapper
{
	T* obj;
public:
	xreference_wrapper(T& r) : obj(&r) {}

	operator T&() { return *obj; }
};

int main()
{
	int n = 10;

//	int* p = &n;
//	int& r = p; // p�� n�� �ּҸ� ��� �ִ�. �׷��� ������ ��ȯ�ɼ� ����.

	xreference_wrapper<int> rw(n); // n�� �ּ� ����.
	int& r = rw; // rw.operator int&()
}








