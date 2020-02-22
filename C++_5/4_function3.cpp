// 4_function3
#include <iostream>
using namespace std;
void f0()				{ printf("f0\n"); }
void f1(int a)			{ printf("f1 : %d\n", a); }
void f2(int a, int b)	{ printf("f2 : %d, %d\n", a, b); }

class Dialog
{
public:
	void Close() { cout << "Dialog Close" << endl; }
};

#include <functional> // C++11�� ������ �Լ� ������ ��ü

int main()
{
	function<void()> f = &f0;
	f(); // f0() ȣ��

	// ���ڰ� �Ѱ��� �Լ�
	f = bind(&f1, 10); // ���ڸ� �����ؼ� ��´�. 
	f(); // f1(10)

	// ���ڰ� 2�����Լ�
	f = bind(&f2, 10, 20);
	f(); // f2(10,20)


	// ��� �Լ�
	Dialog dlg;
	f = bind(&Dialog::Close, &dlg);
	f(); // dlg.Close()
}







