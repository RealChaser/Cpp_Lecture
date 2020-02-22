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

//	auto f1 = [](int a) { return a + v1 + v2; }; // error
	auto f2 = [=](int a) { return a + v1 + v2; };// ok
//	auto f3 = [=](int a) { v1 = 100; return a + v1 + v2; }; // error
	auto f4 = [=](int a) mutable { v1 = 100; return a + v1 + v2; }; // ok
										// ���纻 ����

	// capturing by reference
	auto f5 = [&](int a) { v1 = 100; return a + v1 + v2; };//

	f5(0);

	cout << v1 << endl;
							
	// capture by reference �϶��� Closure Ŭ���� ���
	class LamdaClass
	{
		int& v1;
		int& v2; 
	public:
		LambdaClass(int& a, int& b) : v1(a), v2(b) {}

		int operator()(int a) const
		{
			v1 = 100; // v1�̶�� ������ ���ϴ� ���� �ƴ϶�
					  // v1�� ����Ű�� �� ����..�׷���. ok..
			return a + v1 + v2;
		}
	};
	auto f3 = LambdaClass(v1, v2);
								
}












