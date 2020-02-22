// 2_rvalue3

// rvalue와 참조..
int main()
{
	int n1 = 10;

	// 규칙 1. C++98의 참조 문법은 lvalue 만 참조 한다.
	//        "lvalue reference"라는 이름을 사용합니다.
	int& r1 = n1; // ok.
	int& r2 = 10; // error

	// 규칙 2. const 참조는 rvalue와 lvalue를 모두 가르킨다.
	//         가르킬수는 있지만 상수성이 추가된다.
	const int& r3 = n1; // ok
	const int& r4 = 10; // ok


	// 규칙 3. C++11의 rvalue reference는 rvalue만 가르킨다.
	int&& r5 = n1; // error
	int&& r6 = 10; // ok...

}