// 11_�����������ø� - 108 page
#include <iostream>
using namespace std;



// �������� Ŭ���� ���ø� 
template<typename ... Types > class xtuple {};

// �������� �Լ� ���ø�
template<typename ... Types> void foo(Types ... args) 
{
};

int main()
{
	foo();
	foo(1);
	foo(1, "ddd", 2.3);

	xtuple<int> t1;
	xtuple<int, char, long> t3;
	xtuple<> t0;
}
