// 5_����
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;


// ���ٸ� ���ڷ� �޴� �Լ� - 31 page �Ʒ� �κ�

//void foo( int(*f)(int, int) ) {} // �Լ� ������: �ζ��� ġȯ �ȵ�.

//void foo( function<int(int,int)> f ) {} // function : �ζ��� ġȯ �ȵ�.


// ���� : auto�� ���� �Լ� ���ڰ� �ɼ� �����ϴ�.!!!
//void foo( auto f) {} // ������ error.


template<typename T> void foo( T f) {} // ok.. �ζ��� ġȯ��..


int main()
{
	foo( [](int a, int b) { return a + b;} );
	foo( [](int a, int b) { return a + b;});
}






