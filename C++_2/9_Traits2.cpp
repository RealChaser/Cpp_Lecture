#include <iostream>
using namespace std;

// Traits : ���ø� ���� T�� �پ��� �Ӽ��� �����ϴ� ���
//          ��Ÿ �Լ� - ������ �ð��� ����ϴ� �Լ�

// ����� ���
// 1. ����ü template ���� ���� �Ѵ�.

// 2. primary template���� false ����( value = false ��� �ǹ�)

// 3. �κ� ����ȭ true ���� ( value = true )



// T�� ���������� �����ϴ� ���
template<typename T> struct IsPointer
{
	//enum { value = false }; // C++98 style..
	static constexpr bool value = false; // C++11 style (���� ���)
};

template<typename T> struct IsPointer<T*>
{
	//enum { value = true };
	static constexpr bool value = true;
};

template<typename T> void foo(T a)
{
	if ( IsPointer<T>::value )
		cout << "������" << endl;
	else
		cout << "������ �ƴ�" << endl;
}
int main()
{
	int n = 0;
	foo(n);
	foo(&n);
}



