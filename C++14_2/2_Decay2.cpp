// 13_Decay2

int main()
{
	int n1 = 10;
	int n2 = n1;

	double d1 = 3.4;
	double d2 = d1; // ��� Ÿ���� ������ �ڽŰ� ������ Ÿ���� ��ü��
					// �ʱ�ȭ �ɼ� �ִ�.(���� �����ɼ� �ִ�.)

	int x[3] = { 1,2,3 };


	//int y[3] = x; // �ɱ�� ? �迭�� �Լ��� ���� �����ɼ� ����.

	int* y = x; // ���, 1��°����� �ּҷ� �Ͻ��� ����ȯ �ȴ�.

	int (&r)[3] = x; // ok..
}