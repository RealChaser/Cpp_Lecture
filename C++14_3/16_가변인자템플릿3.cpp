#include <iostream>
using namespace std;

// 가변 인자 꺼내는 방법..

// 핵심 . 1번째 인자는 반드시 독립된 변수로 받아야 한다.
template<typename T, typename ... Types> 
void foo(T value, Types ... args)
{
	static int n = 0;
	++n;

	cout << n << endl;

	cout << typeid(T).name() << " : " << value << endl;

	foo(args...); // value : 3.4  args : 4
				  // value : 4    args :
}
void foo() {} // 재귀를 종료하기 위해..
				// 정확히는 재귀 호출은 아님..

int main()
{
	foo(1, 3.4, 4);   // value : 1
					  // args : 3.4, 4
}









