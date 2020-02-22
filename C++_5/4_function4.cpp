// 4_function3
#include <iostream>
using namespace std;
void f0() { printf("f0\n"); }
void f1(int a) { printf("f1 : %d\n", a); }
void f2(int a, int b) { printf("f2 : %d, %d\n", a, b); }

class Dialog
{
public:
	void Close() { cout << "Dialog Close" << endl; }
};

#include <functional> // C++11�� ������ �Լ� ������ ��ü
using namespace std::placeholders; // _1, _2�� ���ؼ�..

int main()
{
	function<void(int)> f; //  ���ڰ� �Ѱ��� �Լ� �ּ� ����

	f = &f1;
	f(10); // ���ڰ� �Ѱ� �ִ� �Լ� �̹Ƿ� �Ѱ� ����


	f = bind(&f2, 5, _1);
	f(3); // f2(5, 3)

}







