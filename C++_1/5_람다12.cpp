// 5_����11
// 5_����
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

int main()
{
	auto f1 = [](int a) { return 0;};
	auto f2 = []() { return 0;};
	auto f3 = [] { return 0;}; // ���ڰ� ������ 0 ���� ����. nullary lambda


	/*
	// C++�� �Ʒ� ó�� ����Ҽ� ������ Swift ���� �Ʒ� ó�� ����Ҽ� �ֽ��ϴ�.
	sort(x, x + 10, [](int a, int b) { return a < b;});
	sort(x, x + 10, [] { return a < b;});

	sort(x, x + 10){ return a < b;};
	*/
}













