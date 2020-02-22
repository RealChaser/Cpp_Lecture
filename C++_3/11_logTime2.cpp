// 11_logTime
// 3_완벽한전달자9
#include <iostream>
using namespace std;


template<typename F, typename ... Types>
decltype(auto) logTime(F f, Types&& ... args)
{
	StopWatch sw; // 생성자에서 시작 시간 기록
				  // 소멸자에서 걸린 시간 출력

	return f(forward<Types>(args)...);
}


int main()
{

}












