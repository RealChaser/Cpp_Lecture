// 15_��ȯ- 51 PAGE
#include <iostream>
using namespace std;

// Complex => int : ��ȯ ������
// int => Complex : ��ȯ ������( ���ڰ� 1���� ������)

class Complex
{
	int re, im;
public:
	Complex()             : re(0), im(0) {}
	Complex(int a, int b) : re(a), im(b) {}

	// ���ڰ� �Ѱ��� ������, ��ȯ �����ڶ�� �θ���.
	// int => Complex ��ȯ�� ����Ѵ�.
	Complex(int a) : re(a), im(0) {}

	// ��ȯ ������ : complex => int�� ��ȯ�ǰ� �Ѵ�.
	// Ư¡ : ���� Ÿ���� ǥ�� ���� �ʴ´�.
	operator int() { return re; }
};

int main()
{
	Complex c1;
	Complex c2(0, 0);

	int n = 10;
	n = c2; // Complex => int : c2.operator int() 
	c2 = n; // int => Complex : n.operator Complex() �� ������ ������
			//					n ��ü�� �ƴϴ�.
}





/*
int main()
{
	double d = 3.4;
	int    n = d; // �Ͻ��� ����ȯ

	Complex c;
	n = c;	// c.operator int()�� ������ �ȴ�.
}
*/

