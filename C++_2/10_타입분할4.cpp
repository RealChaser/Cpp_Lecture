// 10_타입분할
#include <iostream>
#include <type_traits>
using namespace std;

// 힌트 : 아래 함수의 타입은 함수 이름을 제외한 모양입니다.
//       int (int,int)
int goo(int a, int b) { return 0; }


template<typename T> struct ReturnType
{
	typedef T type;
};




// 리턴 타입을 꺼낼수 있도록 타입 분할
template<typename R, typename A1, typename A2> 
struct ReturnType<R(A1, A2)>
{
	typedef R type;
};






template<typename T> void foo(const T& a)
{
	typename ReturnType<T>::type n; // 함수 인자가 2개 라고 가정 하고 해보세요

	cout << typeid(n).name() << endl; // int 나오게 해보세요.

//	n = a(0, 0); // goo(0,0)
}

int main()
{
	foo(goo);
}




