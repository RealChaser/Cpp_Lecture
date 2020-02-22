#include <iostream>
using namespace std;

void foo(int& r)       { cout << "int&" << endl; }      // 1
void foo(const int& r) { cout << "const int&" << endl; }// 2
void foo(int&& r)      { cout << "int&&" << endl; }     // 3

int main()
{
	int n = 10;
	//foo(n); // 1번, 없으면 2번 
	//foo(10);// 3번, 없으면 2번.

	int& r = n;
	//foo(r); // 1번, 없으면 2번..
	
	int&& rr = 10; // 10은 rvalue이지만
				   // 10을 가르키는 rvalue reference는 rr이라는이름이 있다.
					//  rr은 lvalue 이다
	foo(rr); // 1

	foo(static_cast<int&&>(rr)); // 3번.. rvalue 로 캐스팅하는 코드

	//Point&& pr = Point();
	//pr.x = 10;
}











