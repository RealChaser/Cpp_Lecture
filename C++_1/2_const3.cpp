// 2_const3

int main()
{
	int n = 10;

	constexpr int c1 = 10; // ok.. 컴파일 시간 상수만 담을수 있다.
	constexpr int c2 = n; //  error

	const int c3 = 10; // ok
	const int c4 = n;  // ok.

}