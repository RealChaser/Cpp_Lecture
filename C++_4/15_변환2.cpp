// 15_변환- 51 PAGE
#include <iostream>
using namespace std;

class Complex
{
	int re, im;
public:
	// explicit  생성자 : 인자가 한개인 생성자가 암시적 변환에 사용되는
	//					것을 막는다.
	explicit Complex(int a = 0, int b = 0) : re(a), im(b) {}
};
void foo(const Complex& c) {}

int main()
{
	Complex c(1, 2);
	foo(c); // ok
	//foo(3); // int => Complex 암시적변환 되면 된다. 변환 생성자 필요.

	Complex c1(1); // ok.. 
}





