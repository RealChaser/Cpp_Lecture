// 4_함수객체3
#include <iostream>
#include <algorithm> 
#include <functional> // less<>, greater<>등의 함수 객체가 있습니다.
using namespace std;

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++98 style
	less<int> f;
	sort(x, x + 10, f);


	// c++11 STYLE  : 람다 표현식(Lambda Expression) 이라는 문법사용 - 29page
	
	// [] : lambda introducer 라고 부릅니다.

	sort(x, x + 10, [](int a, int b) { return a < b;} );


}






