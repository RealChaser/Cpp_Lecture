// 2_const2.cpp - 9 page
#include <iostream>
using namespace std;

/*
int main()
{
//	const int c = 10; // 컴파일 시간 상수. 컴파일러는 c를 매크로처럼 처리한다.

	int n = 10;
	const int c = n; // 실행시간 상수 

	//int* p = &c; // error. 상수 주소를 비상수 포인터에 담을수 없다.
	//int* p = (int*)&c; // 강제 변환. C++스타일로는  const_cast<int*>(&c)
							// ok
	int* p = const_cast<int*>(&c); // ok
	
	*p = 20;

	cout << c << endl;  // 10   20 
	cout << *p << endl; // 20   20 
}
*/

int main()
{
	int x1[10]; // ok

	int sz1 = 10;
	int x2[sz1]; // C89 : 배열 크기로 변수 안됨.
				 // C99 : 배열 크기로 변수 가능 - gcc지원, vc 지원 안함
				 // error
	const int sz2 = 10;
	int x3[sz2]; // ok

	const int sz3 = sz1;
	int x4[sz3]; // error. 배열 크기는 컴파일 시간에 알아야 한다.(C89문법)

	foo(sz1); //ok 이므로 foo의 s는 실행시간 상수..
}

void foo(const int s)
{
	int x[s]; // ?
}





