#include <iostream>
using namespace std;
// 함수 객체 : ()연산자를 사용해서 함수 처럼 사용가능한것
//				함수포인터, 함수 참조, 멤버함수포인터, 멤버함수 참조
//				()연산자를 재정의한 클래스(구조체)
// C++17 : callable object 라는 용어를 공식적으로 등장시킴.
struct Plus
{
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	Plus p;
	int n = p(1, 2);  // p.operator()(1,2) 의 원리
	cout << n << endl;	
}



