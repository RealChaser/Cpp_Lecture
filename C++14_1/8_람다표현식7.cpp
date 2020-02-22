// 3_����ǥ����7 - �߿�! - 34page

#include <iostream>
using namespace std;

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	//auto f1 = [](int a) { return a + g; };// �������� ��� - ok
	//auto f2 = [](int a) { return a + v1 + v2; };// �������� ��� error

	// �������� ĸ�� ����
	//auto f3 = [=](int a) { return a + v1 + v2; };// ok	

	//auto f4 = [=](int a) { v1 = 100; return a + v1 + v2; }; // �� ���� - error

	// mutable ���� : ()�����ڰ� const�Լ��� �ƴϴ�
	auto f4 = [=](int a) mutable { v1 = 100; return a + v1 + v2; };

	f4(1); // �̼��� v1 = 100 �� ���纻�� ����
	cout << v1 << endl;
	
	// �������� ĸ�Ľ� �����Ϸ��� ������ �ڵ�
	class Lambda
	{
		int v1;
		int v2; // ������������ �����ϱ� ����
	public:
		Lambda(int a, int b) : v1(a), v2(b) {}

		int operator()(int a) 
		{
			v1 = 100; 
			return a + v1 + v2;
		}
	};
	auto f4 = Lambda(v1, v2); // �����ڷ� �������� ����	
}








