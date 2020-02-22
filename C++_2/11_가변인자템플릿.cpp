// 11_가변인자템플릿 - 108 page
#include <iostream>
using namespace std;



// 가변인자 클래스 템플릿 
template<typename ... Types > class xtuple {};

// 가변인자 함수 템플릿
template<typename ... Types> void foo(Types ... args) 
{
};

int main()
{
	foo();
	foo(1);
	foo(1, "ddd", 2.3);

	xtuple<int> t1;
	xtuple<int, char, long> t3;
	xtuple<> t0;
}
