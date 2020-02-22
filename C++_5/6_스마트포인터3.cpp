#include <iostream>
using namespace std;

// C++11의 스마트포인터 헤더
#include <memory>

int main()
{
	//shared_ptr<int> p1 = new int; // error. explicit 생성자
	shared_ptr<int> p1(new int); // ok.

	*p1 = 10;
	shared_ptr<int> p2 = p1; // 이순간 참조계수증가

	cout << *p2 << endl;
}




