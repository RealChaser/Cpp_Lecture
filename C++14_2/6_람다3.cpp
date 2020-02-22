#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
	int x[10] = { 1,2,3 };
	
	// 람다가 활용되는 경우
	// 1. 함수의 인자로 사용
	sort(x, x + 10, [](int a, int b) { return a < b;});


	// 2. auto 변수에 담아서 함수 처럼 사용
	auto f = [](int a, int b) { return a + b; };
				//class ClosureType{}; ClosureType();


	cout << f(1, 2) << endl; // 3   f.operator()(1,2)

	// 3. ()연산자를 직접 호출.. ()연산자 주소 출력
	int n = f.operator()(1, 2);
	cout << n << endl;

	cout << typeid(f).name() << endl;

	printf("%p\n", &decltype(f)::operator());
}





/*
class ClosureType  
{
public:
	inline int operator()(int a, int b) const
	{
		return a + b;
	}
};
*/

