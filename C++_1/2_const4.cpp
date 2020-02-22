
// constexpr은 함수 앞에도 붙일수 있습니다.

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



	int x[ Add(1, 2) ]; // constexpr 함수에 인자로  Literal을 전달되면
						// 컴파일 시간수행.

	int n1 = 10, n2 = 20;
	
	//int y[Add(n1, n2)]; // error

	int s = Add( n1, n2); // ok..
}



