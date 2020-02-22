// 7_static_assert- 186 page
#include <iostream>
#include <cassert>
using namespace std;

// C++11 컴파일 시간 assert

static_assert(sizeof(double) > 16, "double이 16byte 이상이어야 합니다");


void foo(int age)
{
	// 함수 인자는 사용전에 유효성을 조사하는 것이 좋다.
	assert(age > 0);

	int* p = new int[age];
}

int main()
{
	foo(-10);
}
