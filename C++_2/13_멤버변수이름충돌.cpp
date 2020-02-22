// 13_��������̸��浹.cpp
#include <iostream>
using namespace std;

struct Base 
{
	int value = 10;
};
struct Derived : public Base
{
	int value = 20;
};

int main()
{
	Derived d;
	cout << d.value << endl; // 20

	// �θ� ��� ����
	cout << d.Base::value << endl;

	// �θ� Ÿ������ ��ȯ�� ���
	cout << ((Base)d).value << endl;  // �� ĳ���� - �ӽð�ü ����..
	cout << ((Base&)d).value << endl; // ���� ĳ���� - �ӽð�ü ���� �ȵ�

	//((Base)d).value = 30; // �ӽð�ü�� lvalue�� �ɼ� ����. error

	((Base&)d).value = 30; // ok..
}







