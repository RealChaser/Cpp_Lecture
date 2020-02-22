// 5_함수삭제

// 특정함수를
// 1. 제공하지 않은것    : 암시적 형변환을 통해서 다른 함수(동일이름)를 호출할수 있다.
// 2. 선언만 제공하는것  : link 에러가 발생. 함수 호출 안됨.
// 3. 삭제(delete)하는것 : 함수 사용시 컴파일 시간에 에러 발생.
int square(int a) { return a * a; }

//double square(double a);
double square(double a) = delete;
#include <iostream>
using namespace std;


/*
template<typename T> void foo(T a) { cout << "T" << endl; }  // 1

void foo(int a) { cout << "int" << endl; }   // 2

void foo(double) = delete;
*/
int main()
{
//	square(3);
//	square(3.3); // ?

	foo(3); // 2
	foo(2.3); // 1 ?2

}



