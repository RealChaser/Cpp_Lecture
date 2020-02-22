//2_const - 4 page
#include <iostream>
using namespace std;

// 5 page.�Ʒ�..
int n = 10;

// p1�� p2�� �������� �����غ�����(C���� ��� ����)
const int* p1 = &n; // p1�� ���󰡸� const
int* const p2 = &n; // p2��ü�� const..

int const* p3 = &n; //_p1_ �� ����.





// 1. const ��ġ �̾߱� - C++98

template<typename T> class Base
{
public:
	// a�� const�̴�.!!
	//virtual void foo(const T a) { cout << "Base foo" << endl; }
	virtual void foo( T const a) { cout << "Base foo" << endl; }
};

class Derived : public Base<int*>
{
public:
	// foo ������ �� ������.. Derived foo��� ����ϼ���
	// a�� ���󰡸� const�̴�. a��ü�� const �ƴ�.
	virtual void foo(const int* a) { cout << "Derived foo" << endl; }

	//virtual void foo(int* const a) { cout << "Derived foo" << endl; }
};

int main()
{
	Base<int*>* p = new Derived;
	p->foo(0); // "Derived foo" ���;� �մϴ�.



	const int c1 = 10;
	int const c2 = 10; // �� �ڵ�� ������ ������ �ڵ��Դϴ�.
}






