// 6_초기화리스트 - 208 page
#include <iostream>
using namespace std;

int main()
{
	// C++11 표준이 제공하는 타입
	// tuple : 서로 다른 타입의 data 보관
	// initializer_list : 동일 타입의 data 보관
	initializer_list<int> e = { 1,2,3,4 };

	for( auto n : e )
}