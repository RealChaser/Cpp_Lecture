#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// ���ٿ� �Լ� ����

//void foo( int(*f)(int, int) )  // �Լ� ������ ���, �ζ��� ġȯ�ȵ�
//void foo(function<int(int,int)> f)  // �ζ��� ġȯ�ȵ�

//void foo( auto f)  // error. auto�� �Լ� ���ڰ� �ɼ� ����.

template<typename T> void foo( T f) // ok.. inline ġȯ ��.
{
	f(1, 2);

}

int main()
{
	//foo(3);

	foo(  [](int a, int b) { return a + b; }  );
	foo([](int a, int b) { return a - b; });
}












