// 5_람다
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// 람다 표현식 활용 1. 함수의 인자로 정책을 전달하기
	sort(x, x + 10, [](int a, int b) { return a < b; });





	// 람다 표현식 활용 2. 변수에 담아서 함수처럼 사용.
	auto f = [](int a, int b) { return a + b;};
					// class LambdaClass{};LambdaClass();

	// RTTI 기술로 타입알아 내기
	cout << typeid(f).name() << endl;

	
	int n = f(1, 2);
	cout << n << endl; // 3

}


