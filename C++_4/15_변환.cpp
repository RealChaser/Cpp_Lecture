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
	Complex(int a, int b) : re(a), im(b) {}

	// 인자가 한개인 생성자, 변환 생성자라고도 부른다.
	// int => Complex 변환을 허용한다.
	Complex(int a) : re(a), im(0) {}

	// 변환 연산자 : complex => int로 변환되게 한다.
	// 특징 : 리턴 타입을 표시 하지 않는다.
	operator int() { return re; }
};

int main()
{
	Complex c1;
	Complex c2(0, 0);

	int n = 10;
	n = c2; // Complex => int : c2.operator int() 
	c2 = n; // int => Complex : n.operator Complex() 가 있으면 되지만
			//					n 객체가 아니다.
}





/*
int main()
{
	double d = 3.4;
	int    n = d; // 암시적 형변환

	Complex c;
	n = c;	// c.operator int()가 있으면 된다.
}
*/

