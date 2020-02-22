// 8_람다표현식 - 29page
#include <algorithm>
#include <functional>  // less<>, greater<>등의 함수객체가 있습니다
using namespace std;

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// 1. 함수를 사용한 정책 변경
	sort(x, x + 10, cmp1); // 인라인 치환 안됨
 
	// 2. 함수객체를 사용한 정책 변경
	less<int> f; 
	sort(x, x + 10, f); // 인라인 치환

	// 3. C++11 : 람다 표현식 - 인라인 치환됨.
	// 함수 객체를 자동으로 생성해주는 표현식.
	// 클로져(closure) : 람다 표현식으로 생성된 임시객체.
	// [] : Lambda introducer
	sort(x, x + 10, [](int a, int b) { return a < b; } );

	// 컴파일러가 만드는 코드  ★★★★★
	class Lambda    // 클래스 이름은 컴파일러가 임의로 생성
	{
	public:
	    const int operator()(int a, int b) const
		{
			return a < b;
		}
	};
	sort(x, x + 10, Lambda() ); // 임시객체로 전달.
								// 클래스이름() : 임시객체생성
}






