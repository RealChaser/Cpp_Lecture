// 4_�Լ���ü3
#include <iostream>
#include <algorithm> // �� �ȿ� sort()�� �ֽ��ϴ�
using namespace std;

// cmp1, cmp2, Less, Greater ���� �ؿ�����

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };


	// 1. �� ��å���� �Ϲ��Լ� ���
	// ���� : ��å�� ������ ��ü�ص� sort()���� �ڵ�� �Ѱ� �̴�.
	// ���� : ��å�� �ζ��� ġȯ �ȵȴ�.

	sort(x, x + 10, cmp1);// sort( int*, int*, bool(*)(int,int)) �� �Լ�����
	sort(x, x + 10, cmp2);// sort( int*, int*, bool(*)(int,int)) �� �Լ�����


	// 2. �� ��å���� �Լ� ��ü ���
	// ���� : ��å�� ������ ��ü�ϸ� sort()���� �ڵ�� ������ �̴�.
	// ���� : ��å�� �ζ��� ġȯ �ȴ�.

	Less    f1;
	Greater f2;
	sort(x, x + 10, f1); // sort( int*, int*, Less) ����..
	sort(x, x + 10, f2); // sort( int*, int*, Greater) ����..

}





