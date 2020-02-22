
// constexpr�� �Լ� �տ��� ���ϼ� �ֽ��ϴ�.

constexpr int Add(int a, int b) { return a + b; }

constexpr int Factorial(int n)
{
//	if (n == 1)
//		return 1;
//	return n * Factorial(n - 1);

	return n == 1 ? 1 : n * Factorial(n - 1);
}

int main()
{
	int z[Factorial(5)];



	int x[ Add(1, 2) ]; // constexpr �Լ��� ���ڷ�  Literal�� ���޵Ǹ�
						// ������ �ð�����.

	int n1 = 10, n2 = 20;
	
	//int y[Add(n1, n2)]; // error

	int s = Add( n1, n2); // ok..
}



