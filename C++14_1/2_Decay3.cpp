#include <iostream>
using namespace std;

template<typename T> void foo(T  a) // 1. T int[3] : int a[3] 가 되면 좋지만 될수 없다.
{									// 2. int* 로 가능.
	cout << typeid(T).name() << endl; // int*
}
template<typename T> void goo(T& a) // int (&a)[3]	참조는 가능하기 때문에 타입 그대로 적용됨 
{
	cout << typeid(T).name() << endl; // int[3]
} 

int main()
{
	int x[3] = { 0 };
	
	//생각해 보세요.. 컴파일러 입장에서 최대한 T를 정확하게 결정해야 합니다
	foo(x); 
	goo(x);


}







