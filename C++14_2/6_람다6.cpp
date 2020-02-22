#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// 람다 표현식을 변수에 담는 방법
int main()
{
	auto f1                   = [](int a, int b) { return a + b;};

	//f1 = ; 변경불가
	int(*f2)(int, int)        = [](int a, int b) { return a + b;};

	function<int(int,int)> f3 = [](int a, int b) { return a + b;};

	// 다음중 인라인 치환여부를 생각해 보세요
	f1(1, 2); //   ok..
	f2(1, 2); // 치환 안됨.
	f3(1, 2); // 치환 안됨.
}




