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

#include <functional> // C++11의 범용적 함수 포인터 객체
using namespace std::placeholders; // _1, _2를 위해서..

int main()
{
	function<void(int)> f; //  인자가 한개인 함수 주소 보관

	f = &f1;
	f(10); // 인자가 한개 있는 함수 이므로 한개 전달


	f = bind(&f2, 5, _1);
	f(3); // f2(5, 3)

}







