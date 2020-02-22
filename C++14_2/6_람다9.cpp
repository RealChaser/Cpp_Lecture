#include <iostream>
using namespace std;


// ���ٿ� ���� ĸ��
// default capture by value
int g = 10;

int main()
{
	int v1 = 10, v2 = 20;

	auto f1 = [](int a) { return a + g;};        // ok..
	//auto f2 = [](int a) { return a + v1 + v2; }; // error.


	// = : default capture by value 
	auto f2 = [=](int a) { return a + v1 + v2; }; // ok..

	// �Ʒ� ó�� �ϸ� () �����ڰ� ��� �Լ��Դϴ�.
	//auto f3 = [=](int a) { v1 = 100; return a + v1 + v2; }; //error

	// �Ʒ� ó�� �ϸ� () �����ڰ� ���� �Լ� �Դϴ�.
	auto f3 = [=](int a) mutable { v1 = 100; return a  + v1; };// ok

	f3(10); // ���� ȣ�� v1 =100�����..

	cout << v1 << endl; // 10


	cout << sizeof(f3) << endl; // ??  8
}



/*

class ClosureType  
{
	int v1;
	int v2; // �������� ���� ��� ���� ��� ����
public:
	ClosureType(int a, int b) : v1(a), v2(b) {}

	inline bool operator()(int a) //const
	{
		v1 = 100;	// ok
		return a + v1 + v2;
	}
};

auto f3 = ClosureType(v1, v2); // �������� 2���� �����ڿ� ����





*/







