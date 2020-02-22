// 34page

#include <iostream>
using namespace std;

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	// capture by value
	//auto f1 = [=](int a) { return a + v1; }; // ���� �Ұ�
	//auto f1 = [=](int a) mutable { return a + v1; }; // ���� ����
													// ���纻

	// capture variable by reference
	auto f1 = [&](int a) { v1 = 100;  return a + v1; }; //  ���� ����

	f1(0);
	cout << v1 << endl; // 100

	// �������� ĸ�Ľ� �����Ϸ��� ������ �ڵ�
	class Lambda
	{
		int& v1;
		int& v2;
	public:
		Lambda(int& a, int& b) : v1(a), v2(b) {}

		int operator()(int a) const
		{
			v1 = 100;
			return a + v1 + v2;
		}
	};
	auto f4 = Lambda(v1, v2); // �����ڷ� �������� ����

}








