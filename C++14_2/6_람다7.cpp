#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// 람다와 함수 인자

//void foo( int(*f)(int, int) )  // 함수 포인터 사용, 인라인 치환안됨
//void foo(function<int(int,int)> f)  // 인라인 치환안됨

//void foo( auto f)  // error. auto는 함수 인자가 될수 없다.

template<typename T> void foo( T f) // ok.. inline 치환 됨.
{
	f(1, 2);

}

int main()
{
	//foo(3);

	foo(  [](int a, int b) { return a + b; }  );
	foo([](int a, int b) { return a - b; });
}












