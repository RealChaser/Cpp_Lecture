//0. C++ �ű�� ������ �Ұ�

#include <iostream>
#include <string>
#include <complex>
#include <chrono>

using namespace std;
using namespace std::chrono;

void foo(string s)      { cout << "string" << endl; }
void foo(const char* s) { cout << "const char*" << endl; }

// ��������ǥ��( suffix return type)
auto foo() -> int
{
}

int main()
{
	int n1 = 0b10;			// 0b : 2���� 
	int n2 = 1'000'000;		// ' �� �ǹ̴� ������ ������ ����� ���� �ڸ��� �и��� ��밡��
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	auto n3 = x[1]; // �캯�� �������� �º��� Ÿ�� ���� (int �� ����)
	decltype(n3) n4 = n3; // () ���� ������ ����Ÿ���� ���� ����
	decltype(x[1]) d1 = x[1]; // int&
	
	for (auto n : x) // range for  foreach()
	{
		cout << n << endl;
	}

	float f = 3.4f; // l

	foo("hello"); // const char*
	foo("hello"s); // string	-> ���ڿ� �ڿ� s �� string

	seconds s = 10min + 23s;	// -> ������ �ڿ� s�� second
	cout << s.count() << endl; // 623
}