#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// ���ٿ� ����Ÿ��
int main()
{
	auto f1 = [](int a, int b) { return a + b;};

	auto f2 = [](int a, int b) ->int { return a + b; };

	auto f3 = [](int a, int b)  { if (a == 0)
											return a; 
										return b; };

	// 2���̻��� ���Ϲ����� ���� �ٸ� Ÿ���� �����Ұ��
	// �ݵ�� ���� ǥ�ø� �ؾ� �Ѵ�.
	auto f4 = [](int a, double b) -> double { if (a == 0)
									return a;
									return b; };


}












