// 15_��ȯ- 51 PAGE
#include <iostream>
using namespace std;

class Complex
{
	int re, im;
public:
	// explicit  ������ : ���ڰ� �Ѱ��� �����ڰ� �Ͻ��� ��ȯ�� ���Ǵ�
	//					���� ���´�.
	explicit Complex(int a = 0, int b = 0) : re(a), im(b) {}
};
void foo(const Complex& c) {}

int main()
{
	Complex c(1, 2);
	foo(c); // ok
	//foo(3); // int => Complex �Ͻ�����ȯ �Ǹ� �ȴ�. ��ȯ ������ �ʿ�.

	Complex c1(1); // ok.. 
}





