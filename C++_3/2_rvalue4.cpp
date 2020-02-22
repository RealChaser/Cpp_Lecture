#include <iostream>
using namespace std;

void foo(int& r)       { cout << "int&" << endl; }      // 1
void foo(const int& r) { cout << "const int&" << endl; }// 2
void foo(int&& r)      { cout << "int&&" << endl; }     // 3

int main()
{
	int n = 10;
	//foo(n); // 1��, ������ 2�� 
	//foo(10);// 3��, ������ 2��.

	int& r = n;
	//foo(r); // 1��, ������ 2��..
	
	int&& rr = 10; // 10�� rvalue������
				   // 10�� ����Ű�� rvalue reference�� rr�̶���̸��� �ִ�.
					//  rr�� lvalue �̴�
	foo(rr); // 1

	foo(static_cast<int&&>(rr)); // 3��.. rvalue �� ĳ�����ϴ� �ڵ�

	//Point&& pr = Point();
	//pr.x = 10;
}











