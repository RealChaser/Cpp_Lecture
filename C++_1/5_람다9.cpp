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

	// ��� �������� ĸ��.
	auto f1 = [=](int a) { return a + v1 + v2; };
	auto f2 = [&](int a) { return a + v1 + v2; };

	auto f3 = [v1](int a) { return a + v1; };
	auto f4 = [&v1](int a) { return a + v1; };

	auto f5 = [=, &v1](int a) { return a + v1 + v2; };
	auto f6 = [&, v1](int a) { return a + v1 + v2; };

	//auto f7 = [&, &v1](int a) { return a + v1 + v2; }; // error

	// ��� data�̸� ����
	auto f7 = [x=v1](int a) { return a + x; }; //


}












