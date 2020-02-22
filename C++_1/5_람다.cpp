// 5_람다
#include <algorithm>
using namespace std;

// 1. 람다 표현식의 정확한 원리 - 30 page

// 2. 람다 표현식(Lambda Expression) 은 함수객체를 만드는 표현일뿐입니다.

// 3. 클로져(Closure) : 람다 표현식이 만든 임시객체..


int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };


	// sort()의 3번째 인자는 반드시 ()로 호출가능한 객체가 전달되야 합니다..
	sort(x, x + 10, [](int a, int b) { return a < b; } );



	// 위 람다 표현식을 보고 컴파일러는 아래 클래스를 생성합니다.
	class LambdaClass
	{
	public:
		inline bool operator()(int a, int b) const
		{
			return a < b;
		}
	};
	sort(x, x + 10, LambdaClass() );


}


