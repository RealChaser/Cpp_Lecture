// 5_����
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

// ���ٿ� ���� Ÿ�� - 32 page
int main()
{
	// 1. ���ϰ� ǥ��� trailing return(postfix return syntax) ����.
	auto f1 = [](int a, int b) -> int { return a + b;};

	// 2. return ������ �ϳ��� ��� ���� Ÿ�� ��������.
	auto f2 = [](int a, int b) { return a + b;};

	
	// 3. return ���� ������ �־ ���� Ÿ���̸� ���� Ÿ�� ��������
	auto f3 = [](int a, int b) { if (a == 1) return a; return b;};

	// 4. return ���� ������ �ְ� �ٸ� Ÿ���� �����ϸ� ���� Ÿ�� �����Ҽ� ����.
	auto f4 = [](int a, int b) -> double { if (a == 1) return a ; return 3.4;};

}












