#include <iostream>
#include <memory>
using namespace std;

int main()
{
	// 1. ������ ����
	unique_ptr<int> p1(new int);
	unique_ptr<int[]> p2(new int[10]);
//	unique_ptr<int, Freer> p3((int*)malloc(100));


	// 2. ����� �̵�
	//unique_ptr<int> p4 = p1; // error
	unique_ptr<int> p5 = move(p1); // ok.

	// 3. ��� ����
	unique_ptr<int>   p6(new int);
	unique_ptr<int[]> p7(new int[10]);

	*p6 = 3;  // ok..
	*p7 = 3;  // error
	p6[0] = 3;// error
	p7[0] = 3;// ok.


	// ������ ���� ���
	shared_ptr<int> sp1(new int, foo);
	shared_ptr<int> sp2(new int, goo);

	unique_ptr<int, D1> wp1(new int);
	unique_ptr<int, D2> wp2(new int);

}









