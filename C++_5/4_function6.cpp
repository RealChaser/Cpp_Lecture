// 4_function3
#include <iostream>
#include <functional> 
using namespace std;
using namespace std::placeholders;

void f4(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
	// function 없이 bind()만 사용하는 경우도 아주 많습니다.
	bind(&f4, _1, _3, _2, 4)(1,2,3);  // 1, 3, 2, 4

	bind(&f4, _1, 1 , 2 , 3 )(6); // 6, 1,2,3 나오게 해보세요..
}







