// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;


// 람다를 인자로 받는 함수 - 31 page 아래 부분

//void foo( int(*f)(int, int) ) {} // 함수 포인터: 인라인 치환 안됨.

//void foo( function<int(int,int)> f ) {} // function : 인라인 치환 안됨.


// 주의 : auto는 절때 함수 인자가 될수 없습니다.!!!
//void foo( auto f) {} // 컴파일 error.


template<typename T> void foo( T f) {} // ok.. 인라인 치환됨..


int main()
{
	foo( [](int a, int b) { return a + b;} );
	foo( [](int a, int b) { return a + b;});
}






