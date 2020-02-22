// 10_chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
	// C++11 ǥ�ؿ� �Ʒ� ó�� �Ǿ� �ֽ��ϴ�.
	/*
	using seconds = duration<int, ratio<1, 1>>; 
	using minutes = duration<int, ratio<60, 1>>;
	using milliseconds = duration<int, ratio<1, 1000>>;
	*/

	seconds s(3); // 3��
	nanoseconds ns = s;

	cout << ns.count() << endl;

	//minutes m = s; // error
	minutes m = duration_cast<minutes>(s); // ok..

	cout << m.count() << endl;

	//---------------------------------------------
	// ����� ���� literal ���

//	seconds s1 = 3; // error.
	seconds s2(3);  // ok.  �ᱹ duration�� �����ڴ� explicit 

	seconds s3 = 3s; // operator""s(3) �Լ��� seconds��ü ����.
					 // �ᱹ, ���� ������ ȣ��

	//seconds s4 = 1min;

	seconds s4 = 1min + 30s;

	cout << s4.count() << endl;


	seconds s5(35);

	cout << duration_cast<minutes>(s4).count() << endl;
	cout << floor<minutes>(s4).count() << endl;
	cout << ceil<minutes>(s4).count() << endl;
	cout << round<minutes>(s4).count() << endl;

}








