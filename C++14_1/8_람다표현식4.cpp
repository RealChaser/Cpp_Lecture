// 3_����ǥ����3
#include <iostream>
#include <functional>
using namespace std;

// ����ǥ������ ��� ���� - 31 PAGE
int main()
{
	auto f1            = [](int a, int b) { return a + b; };
	
	int(*f2)(int, int) = [](int a, int b) { return a + b; };
					// class Lambda{}; Lambda();
					// ���� Ŭ������ �Լ� �����ͷ��� �Ͻ��� ����ȯ ����
	
	function<int(int,int)> f3 = [](int a, int b) { return a + b; };


	// �Ʒ� �ڵ���� �ζ��� ġȯ���� ������ ������
	f1(1, 2); //  ġȯ ��.
	f2(1, 2); //  ġȯ �ȵ�
	f3(1, 2); //  ġȯ �ȵ�
}








