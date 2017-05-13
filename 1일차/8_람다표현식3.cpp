// 3_람다표현식3
#include <iostream>
using namespace std;

// 람다와 타입- 30 page
// 핵심 ) 모든 람다 표현식은 다른 타입이다.
int main()
{

	auto f1 = [](int a, int b) { return a + b; }; //class lambda-xxx
	
	// 람다 표현식으로 초기화된 변수는 변경될수 없다.
	f1 = [](int a, int b) { return a + b; }; // error

	decltype(f1) f3 = f1; //decltype로 람다 클래스의 이름을 동일하게 해서 다른 변수 초기화 가능

	auto f2 = [](int a, int b) { return a + b; }; //class lambda-xxxxxxxx

	// f1, f2 는 다른 타입. 람다는 내용이 같아도 정의 될 때마다 다른 클래스 이름으로 생성됨
	cout << typeid(f1).name() << endl;
	cout << typeid(f2).name() << endl;
}






