// 4_�Լ���ü5.
#include <iostream>
using namespace std;

// 1. �Լ� ��ü ���鶧 () ������ �Լ��� ��κ� ��� �Լ��� ����� �˴ϴ�.
// 2. Ŭ�����̸�() : �ӽð�ü ����

// 3. "�Լ���ü(Function Object)"�� ��Ȯ�� �ǹ� : ()�� ����ؼ� ȣ�Ⱑ���� ��ü

//	=> �Լ�, �Լ�������, �Լ��� ���� ����, ()�����ڸ� �������� Ŭ����

class Plus
{
public:
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

void foo(const Plus& p)
{
	p(1, 2); // ???
}

int main()
{
	Plus p;
	foo(p);

	foo( Plus() );//  Ŭ�����̸�() : �ӽð�ü�� ����� ǥ��
				//                 �ӽð�ü�� ������ ��(;)���� �ı�

}












