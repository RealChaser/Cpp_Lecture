// 14_������ ��� - 218 page
#include <iostream>
using namespace std;

class Base
{
	int data;
public:
	Base(int n) : data(n) {}
};

class Derived : public Base
{
	int data2 = 0;
public:
	using Base::Base; // �θ� �����ڸ� ����� �޶�!

	//Derived(int n) : Base(n) {  } // �θ� default �����ڰ� ������
								// �ݵ�� �ڽĿ��� ��������� ȣ���ؾ� �Ѵ�.
};

int main()
{
	//Derived d; // error
	Derived d(5);
}




