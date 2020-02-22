int main()
{
	const int c = 10;

	c = 20; // error.  c는 rvalue인가요 lvalue인가요 ?
			// 수정 불가능한 lvalue

	// 모든 rvalue는 상수이다!!  1. 예   2. 아니오.  답) 2
	10 = c;

	Point().x = 10; // error
	Point().set(10, 10); // ok.. 아무 문제 없다.
						// 임시객체는 rvalue이지만 멤버 함수로 값 수정가능..
						// 상수는 아니다.
}