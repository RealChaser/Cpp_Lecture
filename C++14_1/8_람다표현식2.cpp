#include <iostream>
using namespace std;

int main()
{
	// 람다표현식 활용

	// 1. 함수의 정책으로 전달
	//	sort(x, x + 10, [](int a, int b) { return a < b;  });

	// 2. auto  변수에 담아서 함수 처럼 사용가능
	auto f = [](int a, int b) { return a < b;  };
		// class Lambda{};Lambda();
	
	bool b = f(1, 2); // 1 < 2  이므로 true
	cout << b << endl; // 1

	cout << typeid(f).name() << endl;
}



