// 5_reference_wrapper2
// 5_reference_wrapper - 145 page
#include <iostream>
#include <functional>
using namespace std;

template<typename T> class xreference_wrapper
{
	T* obj;
public:
	xreference_wrapper(T& r) : obj(&r) {}
	operator T&() { return *obj; }
};

void goo(int& r) { r = 30; }

template<typename F, typename T> void Caller(F f,  T arg)
{
	f(arg);
}

// 암시적 추론이 가능한 함수 템플릿을 만들어서 클래스 템플릿을 생성하게 한다.
// 클래스 템플릿을 바로 사용하는 것 보다 편리해 진다.
template<typename T> 
xreference_wrapper<T> xref(T& obj)
{
	return xreference_wrapper<T>(obj);
}




int main()
{
	int n = 10;

	//Caller(goo, n);
	//Caller(goo, &n); // T는 int*로 결정.

//	xreference_wrapper<int> r = n;
//	Caller(goo, r);

	// 임시객체사용 
	// n이 int 인지 컴파일러가 알지만 클래스 템플릿은 암시적 추론이 
	// 안되기 때문에 <int> 가 항상 필요 하다.
	//Caller(goo, xreference_wrapper<int>(n));

	// helper 함수 템플릿 사용
	Caller(goo, xref(n) ); // 최종 버전..!


	cout << n << endl; 
}







