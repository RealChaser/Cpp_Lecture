// 7_람다와변환

// 5_람다
#include <algorithm>
using namespace std;

// 1. 람다 표현식의 정확한 원리 - 30 page

// 2. 람다 표현식(Lambda Expression) 은 함수객체를 만드는 표현일뿐입니다.

// 3. 클로져(Closure) : 람다 표현식이 만든 임시객체..
// 지역변수를 캡쳐 하지 않은 람다만이 함수 포인터로 변환된다.
//           캡쳐하면 함수포인터로 변환될수 없다.

int main()
{
	int v1 = 10;

	auto f = [=](int a, int b) { return a < b+v1;};

	// 아래 코드는 왜 될까요 ?
	bool(*pf)(int, int) = f; // f.함수포인터로의변환연산자함수()

	// 위 람다 표현식을 보고 컴파일러는 아래 클래스를 생성합니다.
	class LambdaClass
	{
		int v1;
	public:
		inline bool operator()(int a, int b) const 	{return a < b + v1;	}
		inline static bool helper(int a, int b) const { return a < b + v1; };
		typedef bool(*PF)(int, int);

		// 함수포인터로의 변환을 지원하기 위한  변환연산자 함수
		operator PF() { return &LambdaClass::helper; }

	};


}


