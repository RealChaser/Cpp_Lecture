// 9_Traits4
#include <iostream>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };


// �Լ� �����ε��� ���� �Լ� dispatch

template<typename T> void printv_imp(T value, YES )
{
	cout << value << " : " << *value << endl;
}

template<typename T> void printv_imp(T value, NO)
{
	cout << value << endl;
}

template<typename T> void printv(T value)
{
	// �Լ� �����ε��� ���� �Լ� ������ ������ �ð��� �̷�� ���ϴ�.
	// ���õ��� ���� �Լ� ���ø��� �ν��Ͻ�ȭ ���� �ʽ��ϴ�.
	printv_imp( value, IsPointer<T>::value )
}




int main()
{
	int n = 3;

	printv(n);
}






