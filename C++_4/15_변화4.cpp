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
	
	explicit Complex(int a)        : re(a), im(0) {}

	// �ϰ��� �ʱ�ȭ ���� ������ ���ڰ� 2�� �̻��� �����ڵ� explicit ����
	
	// explict�� �ƴϸ� {1,1} => Complex ��ȯ ����.

	explicit Complex(int a, int b) : re(a), im(b) {}
};

int main()
{
	Complex c1(5);  // ����
	//Complex c2 = 5; // ��ȯ . error

	Complex c3{ 1,1 }; // ����.
	Complex c4 = { 1,1 }; // ��ȯ
}

