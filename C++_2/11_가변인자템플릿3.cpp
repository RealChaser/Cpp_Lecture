// 11_가변인자템플릿 - 108 page
#include <iostream>
using namespace std;

// 핵심 : 1번째 인자는 반드시 독립된 타입으로 받아야 한다.

template<typename T, typename ... Types> 
void foo(T value, Types ... args)
{
	static int n = 0;
	n++;

	cout << n << " : " << typeid(T).name() << " : " << value << endl;

	foo(args...);  // 호출하면 value : "ddd",  args : 3.4
					// value : 3.4   args : 
					// 최종 적으로 foo() 호출
};

void foo() {} // 재귀 종료를 위해..




int main()
{
	foo(1, "ddd", 2.3); // value : 1    args : "ddd", 2.3

	//printf("%d");
}





