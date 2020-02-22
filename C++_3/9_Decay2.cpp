// 9_Decay

#include <iostream>
using namespace std;

// 132 page

// 규칙 4. 모든 객체는 자신과 동일 타입의 객체로 복사 생성될수 있다.
//         단, 배열은 복사 생성될수 없다.(메모리가 크기 때문에)

void foo(int y[5]) {}

int main()
{
	int a = 10;
	int b = a;

	int x[5] = { 1,2,3,4,5 };
	//int y[5] = x; // error.

	int* p2 = x; // foo(x)
			// 배열의 이름은 배열의 1번째 요소의 주소로 암시적 형변환 된다.

	int(*p1)[5] = &x; // ok.. 정확한 표현!

	printf("%p, %p\n", p1, p1 + 1); // 배열 주소, 20증가
	printf("%p, %p\n", p2, p2 + 1); // 요소의 주소, 4증가



	// 아래 ? 채우세요
	int y[3][2] = { {1,2},3,4,5,6 };

	int (*p1)[3][2] = &y; // 배열 주소

	int (*p2)[2] = y;
}





