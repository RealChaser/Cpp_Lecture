// 13_Decay
#include <iostream>
using namespace std;

int main()
{
	int n = 10; // n�� int Ÿ��

	int *p = &n; // p �� int* Ÿ��.
				 // ��Ģ 1. ���𹮿��� �����̸��� �����ϸ� Ÿ���� ���´�.
				 // ��Ģ 2. ������ �ּҸ� �������� ���� �̸� �տ� &�� ���δ�.
				 // ��Ģ 3. ������ ������ ������� 
				 //         ���� ����Ŀ��� �����̸� �տ� *�� ���δ�.

	int x[5] = { 1,2,3,4,5 }; // x�� Ÿ���� ? int[5]

	// x�� �ּҸ� �������� ?

	int *p2 = x; // ���� �迭�� �ּҰ� �ƴմϴ�.
				 // �迭�� �̸��� �迭�� 1��° ����� �ּҷ� �Ͻ��� ����ȯ �˴ϴ�.
				 // C++ ǥ�� ���� 4-2 �׸� �о� ���ø� �˴ϴ�.


	int (*p3)[5] = &x; // �� ǥ���� �迭�� �ּ� �Դϴ�.

	printf("%p %p\n", p2, p2 + 1);
	printf("%p %p\n", p3, p3 + 1);
}





