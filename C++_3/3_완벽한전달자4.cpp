// 3_완벽한전달자 - 아주 중요 합니다. - 142page 부터 ~
#include <iostream>
using namespace std;

void foo(int  a) { cout << "foo" << endl; }
void goo(int& a) { cout << "goo" << endl; a = 20; }
void hoo(int&& a) { cout << "foo" << endl; }



// int&  : lvalue reference
// int&& : rvalue reference
// T&    : lvalue reference
// T&&   : forwarding reference(Universal reference)

//         함수인자로 lvalue가 오면 T는 참조타입(int&)
//                   rvalue가 오면 T는 값타입(int)

// 결론 : T&& 로 함수를 만들면 int의 경우 int& 버전과 ,int&& 버전의 함수가 
//       자동생성 된다.!
template<typename F, typename T> void logTime(F f, T&& arg)
{
	f(static_cast<T&&>(arg));
}

int main()
{
	int n = 10;
	logTime(goo, n); // lvalue, T = int&    T&& : int& && => int&
	logTime(foo, 0); // rvalue, T = int     T&& : int&&
}



/*
//template<typename T> void foo(T& a) {} // lvalue reference
template<typename T> void foo(T&& a) {} // rvalue reference 라고 할수 없다.
										// 사용자 코드에 따라 달라질수 있다.

int n = 10;
foo<int&>(n);  // int& &&  => int&
foo<int&&>(0); // int&& && => int&&

foo(n); // T&&를 어떻게 결정해야 할까? 먼저 T를 결정해야 한다.
foo(0); // 새로운 문법이 필요 했다 => 위쪽 참고..
*/














