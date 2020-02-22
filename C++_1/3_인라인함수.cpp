// 3_인라인함수- 24 page

// 람다를 이해하려면 : 인라인 함수 => 함수 객체 => 람다 순서로 학습.

// 1. 인라인 함수는 컴파일 시간 문법이다.
// 2. 인라인 함수라도 함수 포인터에 담아서 사용하면 인라인 치환될수 없다.

       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	Add1(1, 2); // 호출.
	Add2(1, 2); // 기계어 코드 치환.

	int(*f)(int, int);

	f = &Add2;  // f는 변수 이다. 실행시간에 변할수 있다.


	f(1, 2); // ?
}


