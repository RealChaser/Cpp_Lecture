#include <iostream>
#include <functional>
using namespace std;

int main()
{
	int x[10] = { 1,2,3 };

	sort(x, x + 10, [](int a, int b) { return a < b;});
}

// 위코드를 보고 C++ 컴파일러는 아래 코드를 생성합니다.
class ClosureType  // 클래스 이름은 컴파일러가 임으로 정하게 됩니다.
{
public:
	inline bool operator()(int a, int b) const
	{
		return a < b;
	}
};

sort(x, x + 10, ClosureType() ); 
	


