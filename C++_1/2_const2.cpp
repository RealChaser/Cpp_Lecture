// 2_const2.cpp - 9 page
#include <iostream>
using namespace std;

/*
int main()
{
//	const int c = 10; // ������ �ð� ���. �����Ϸ��� c�� ��ũ��ó�� ó���Ѵ�.

	int n = 10;
	const int c = n; // ����ð� ��� 

	//int* p = &c; // error. ��� �ּҸ� ���� �����Ϳ� ������ ����.
	//int* p = (int*)&c; // ���� ��ȯ. C++��Ÿ�Ϸδ�  const_cast<int*>(&c)
							// ok
	int* p = const_cast<int*>(&c); // ok
	
	*p = 20;

	cout << c << endl;  // 10   20 
	cout << *p << endl; // 20   20 
}
*/

int main()
{
	int x1[10]; // ok

	int sz1 = 10;
	int x2[sz1]; // C89 : �迭 ũ��� ���� �ȵ�.
				 // C99 : �迭 ũ��� ���� ���� - gcc����, vc ���� ����
				 // error
	const int sz2 = 10;
	int x3[sz2]; // ok

	const int sz3 = sz1;
	int x4[sz3]; // error. �迭 ũ��� ������ �ð��� �˾ƾ� �Ѵ�.(C89����)

	foo(sz1); //ok �̹Ƿ� foo�� s�� ����ð� ���..
}

void foo(const int s)
{
	int x[s]; // ?
}





