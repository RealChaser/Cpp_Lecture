// 3_qualifier
#include <iostream>
using namespace std;

class Test
{
public:
	/*
	// C++98 �� ���� ǥ��
	//void goo() throw(int)     // int ���ܰ� ���ü� �ִ�.
	//void goo() throw()        // ���ܰ� ����.
	void goo()					// � ������ ���ܶ� ���ü� �ִ�.
	{
	}
	// C++11 : ������ ������ �߿����� �ʰ�, ���ܰ� �ִ�/���ٴ� ����� �߿��ϴ�
	//         �׷��� noexcept Ű���尡 ����

	// ��� �Լ� �ڿ� ������ �ִ� ���þ� ����
	void foo() const override final noexcept volatile
	{
	}
	*/
	// & �� &&
	void hoo() &  { cout << "&" << endl; }
	void hoo() && { cout << "&&" << endl; }
};

int main()
{
	Test t;
	t.hoo(); // &

	Test().hoo(); // &&
}



