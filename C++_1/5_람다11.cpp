// 5_람다11
// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;


//int Add(auto a, auto b) { return a + b; } // error. 일반함수인자는 auto안됨.


int main()
{
	// 람다 표현식은 인자로 auto를 받을수 있습니다.
	auto f1 = [](auto a, auto b) { return a + b;};

	cout << f1(1, 3.4) << endl;


	// 람다인자의 auto는 Closure의 ()연산자를 template으로 만들게 됩니다.
	class LambdaClass
	{
	public:
		template<typename T1, typename T2>
		inline auto operator()(T1 a, T2 b) const -> decltype(a + b)
		{
			return a + b;
		}
	};
}













