// 3_람다표현식3
#include <iostream>
#include <functional>
using namespace std;

// 람다표현식을 담는 변수 - 31 PAGE
int main()
{
	auto f1            = [](int a, int b) { return a + b; };
	
	int(*f2)(int, int) = [](int a, int b) { return a + b; };
					// class Lambda{}; Lambda();
					// 람다 클래스는 함수 포인터로의 암시적 형변환 지원
	
	function<int(int,int)> f3 = [](int a, int b) { return a + b; };


	// 아래 코드들의 인라인 치환성을 생각해 보세요
	f1(1, 2); //  치환 됨.
	f2(1, 2); //  치환 안됨
	f3(1, 2); //  치환 안됨
}








