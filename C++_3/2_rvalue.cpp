// 2_rvalue - 46 page

int x = 10;
int  foo() { return x; }
int& goo() { return x; }

// 46 page
// lvalue : =의 왼쪽과 오른쪽에 모두 올수 있다.
//			이름이 있다.
//			단일식을 넘어서 메모리 존재
//			&로 주소를 구할수 있다.
//			참조리턴하는 함수

// rvalue : =의 오른쪽에만 올수 있다.
//			이름이 없다.
//			단일식에서만 존재.
//			&로 주소를 구할수 없다.
//			값리턴 함수.  임시객체, Literal(10, 3.4등의 상수)
int main()
{
	int v1 = 10;
	int v2 = 20;

	v1 = 10;
	v2 = v1;
	10 = v1; // error. 10은 rvalue이다.

	int* p1 = &v1;
	int* p2 = &10; // ??

	foo() = 20; // error
	goo() = 10; // ok
}


