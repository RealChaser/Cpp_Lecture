// 1_Hello.cpp
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// 2 page �׸� - www.isocpp.org


int main()
{
	cout << "hello" << endl;


	int n1 = 0b1010'0000; // C++11 ���� 2���� ����
	
	cout << n1 << endl;
	int n2 = 1'000'000;


	int x[5] = { 1,2,3,4,5 };

	auto n3 = x[0]; // �캯�� Ÿ������ �º� Ÿ���� ������ �޶�.

	//decltype(x[0]) n4;// = x[0];  // () ���� Ÿ�԰� ����Ÿ�� ���� n4
						// error. int& �� �����˴ϴ�.

	// C++98 for..
	for (int i = 0; i < 5; i++)
		cout << x[i] << endl;

	// C++11 style
	for (auto n : x)
		cout << n << endl;


	float f = 3.4f;

	//minutes m = 3min; // ?
	seconds m = 3min; // ?

	cout << m.count() << endl;
}








//int foo() // C++98 style �Լ�

auto foo() -> int  // C++11/14 style - trailing return
{
	return 0;
}












// ����        : Shift + Ctrl + B
// ���� + ���� : Ctrl + F5
