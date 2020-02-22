// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

//  4. 람다를 담는 변수 - 31 page

int main()
{
	auto f1 = [](int a, int b) { return a + b;};
	//f1 = [](int a, int b) { return a + b;};

	// 람다 표현식은 함수포인터로 암시적 형변환 가능.
	int(*f2)(int, int) = [](int a, int b) { return a + b;};
	
	// STL의 function에 담기.
	function<int(int,int)> f3 = [](int a, int b) { return a + b;};

	// 아래 3줄의 인라인 치환여부를 생각해 보세요
	f1(1, 2); // 치환 됨.
	f2(1, 2); // 치환 안됨.
	f3(1, 2); // 치환 안됨.
}



