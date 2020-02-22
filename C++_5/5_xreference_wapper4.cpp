// 5_reference_wrapper3
#include <iostream>
using namespace std;

template<typename T> class xreference_wrapper
{
	T* obj;
public:
	xreference_wrapper(T& r) : obj(&r) {}
	operator T&() { return *obj; }
};

// C++ ����         : �ѹ� ������ ���� ����ɼ� ����. 
//					  ���Կ����� �����ϸ� ������ �̵��� �ƴ� ���� �̵��̴�

// reference_wapper : �̵������� ����
//					  ���Կ����� �����ϸ� ������ �̵��Ѵ�.
//					  ������ �ᱹ �ּҸ� �����ϴ� ��.
//					  ��¥ ������ �Ͻ��� ����ȯ ����.

int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;
//	int& r2 = n2;

	xreference_wrapper<int> r1 = n1;
	xreference_wrapper<int> r2 = n2;

	r1 = r2; // ���� �̵�? ������ �̵� ?

	cout << n1 << endl; // 20   10
	cout << n2 << endl; // 20   20
	cout << r1 << endl; // 20   20
	cout << r2 << endl; // 20   20

	// ��¥ ������ ȣȯ����
	int& r3 = r1; // ok..
}










