// 5_����
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

// ���ٿ� ���� ĸ�� - 33 page

int g = 10;

int main()
{
	int v1 = 10;
	int v2 = 20;

	auto f1 = [](int a) { return a + g;}; // ok. �������� ���� ����.

//	auto f2 = [](int a) { return a + v1 + v2;}; // error. ���������� ���پȵ�.



	// capture by value

	auto f3 = [=](int a) { return a + v1 + v2;}; // ok..

	//auto f4 = [=](int a) { v1 = 100;return a + v1 + v2;}; 
				// error :  ����Լ��� () �����ڿ��� ��� data�� �����Ҽ� ����.
	

	// mutable ���� : ()������ �Լ��� ���� �Լ��� ����� ����.
	auto f5 = [=](int a) mutable { v1 = 100;return a + v1 + v2;};

	f5(0); // v1 = 100�� ����Ǿ����� ���纻�� ����˴ϴ�.

	cout << v1 << endl; // 10


	cout << sizeof(f5) << endl; // ���ٰ�ü�� ũ�� => 8



	/*
	// capture by value �϶��� Closure Ŭ���� ���
	class LamdaClass
	{
		int v1;
		int v2; // ���������� ĸ���ϱ� ���� ��� data
	public:
		LambdaClass(int a, int b) : v1(a), v2(b) {}

		int operator()(int a) //const
		{
			v1 = 100;
			return a + v1 + v2;
		}
	};
	auto f3 = LambdaClass(v1, v2);
	*/
}












