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

#include <functional> // C++11의 범용적 함수 포인터 객체

int main()
{
	function<void()> f = &f0;
	f(); // f0() 호출

	// 인자가 한개인 함수
	f = bind(&f1, 10); // 인자를 고정해서 담는다. 
	f(); // f1(10)

	// 인자가 2개인함수
	f = bind(&f2, 10, 20);
	f(); // f2(10,20)


	// 멤버 함수
	Dialog dlg;
	f = bind(&Dialog::Close, &dlg);
	f(); // dlg.Close()
}







