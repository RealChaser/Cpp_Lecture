// 15_변환- 51 PAGE
#include <iostream>
using namespace std;

// Complex => int : 변환 연산자
// int => Complex : 변환 생성자( 인자가 1개인 생성자)

class Complex
{
	int re, im;
public:
	Complex()             : re(0), im(0) {}
	
	explicit Complex(int a)        : re(a), im(0) {}

	// 일관된 초기화 문법 때문에 인자가 2개 이상인 생성자도 explicit 가능
	
	// explict가 아니면 {1,1} => Complex 변환 가능.

	explicit Complex(int a, int b) : re(a), im(b) {}
};

int main()
{
	Complex c1(5);  // 생성
	//Complex c2 = 5; // 변환 . error

	Complex c3{ 1,1 }; // 생성.
	Complex c4 = { 1,1 }; // 변환
}

