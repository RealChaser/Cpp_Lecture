// 11_가변인자템플릿 - 108 page
#include <iostream>
using namespace std;

void goo(int a, const char* s, double d)
{
	cout << "goo" << endl;
}
void hoo(int* a, const char** s, double* d)
{
	cout << "hoo" << endl;
}
// 가변인자 함수 템플릿

template<typename ... Types> void foo(Types ... args)
{
	// args : parameter pack
	cout << sizeof...(args) << endl;
	cout << sizeof...(Types) << endl;

	// parameter pack을 다른 함수로 전달하기 - pack을 풀러서 보내야 합니다.
	goo(args...); // pack expansion
	hoo(&args...); 
//	koo(++args...);
};


int main()
{
	foo(1, "ddd", 2.3); // 
}
