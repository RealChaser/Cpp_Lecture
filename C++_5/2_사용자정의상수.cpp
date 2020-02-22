// 2_사용자정의상수
#include <string>
#include <iostream>
using namespace std;

// user define literal
class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};
// 226 page 위쪽 표 참고..
// 정수 literal : 반드시 unsigned long long으로 받아야 한다.
Meter operator""_m(unsigned long long n) // 64 비트 정수
{
	return Meter(static_cast<int>(n) );
}


int main()
{
	Meter m = 3_m; // operator""m(3) 이라는 함수를 찾게 된다

//	Meter m = 3cm;
//	Gram  g = 3gram;
}





