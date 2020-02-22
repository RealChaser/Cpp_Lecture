// 5_����
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// ���� ǥ���� Ȱ�� 1. �Լ��� ���ڷ� ��å�� �����ϱ�
	sort(x, x + 10, [](int a, int b) { return a < b; });





	// ���� ǥ���� Ȱ�� 2. ������ ��Ƽ� �Լ�ó�� ���.
	auto f = [](int a, int b) { return a + b;};
					// class LambdaClass{};LambdaClass();

	// RTTI ����� Ÿ�Ծ˾� ����
	cout << typeid(f).name() << endl;

	
	int n = f(1, 2);
	cout << n << endl; // 3

}


