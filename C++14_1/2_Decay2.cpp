// 규칙 1. 모든 객체는 자신과 동일한 타입으로 초기화 될수 있다.
//      2. 배열은 동일 타입으로 초기화 할수 없다.(성능 문제)

/*
int main()
{
	int n1 = 10;
	int n2 = n1;

	double d1 = 3.4;
	double d2 = d1;

	int x[3] = { 1,2,3 };  // x 의 타입은 int[3]
	int y[3] = x; // error 규칙2 때문에

	foo(x); // 배열을 함수 인자로 보내고 싶었다..
			// 그런데 복사가 안되므로 새로운 문법이 필요했다.

	int *p = x;// 배열의 이름의 배열의 첫번째 요소의 주소로 암시적 형변환된다.
}

void foo(int y[3]) // int y[3] = x 규칙 2 위반
{}
*/
#include <cstdio>

int main()
{
	int x[3] = { 1,2,3 };

	int(*p1)[3] = &x; // 배열 주소
	int *p2 = x; // 배열의 첫번째 요소의 주소

	printf("%p, %p\n", p1, p1 + 1);
	printf("%p, %p\n", p2, p2 + 1);

	int y[3][2] = { {1,2}, {3,4}, {5,6} };

	int (*p3)[3][2] = &y; // 배열 주소.
	int (*p4)[2] = y; // 1번째 요소(int[2])의 주소.

	int a[3] = { 1,2,3 };
	int (&b)[3] = a; // ok 참조는 성능문제가 없기 때문에 문제없다.
}





