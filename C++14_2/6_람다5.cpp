#include <iostream>
using namespace std;

// 람다와 함수 포인터

int main()
{
	auto f = [](int a, int b) { return a + b; };

	int(*pf)(int, int) = f; // f는 클로져 객체

	cout << pf(1, 2) << endl; // 3
}
/*

class ClosureType  // 클래스 이름은 컴파일러가 임으로 정하게 됩니다.
{
public:
	inline int operator()(int a, int b) const
	{
		return a + b;
	}

	// 함수 포인터로의 변환을 위해서 static 함수도 제공됩니다.
	static inline int closure_func(int a, int b) const
	{
		return a + b;
	}
	// 클로져 타입은 함수 포인터로의 변환을 허용합니다.
	typedef int(*PF)(int, int);

	operator PF() { return &ClosureType::closure_func; }
};


sort(x, x + 10, ClosureType());







