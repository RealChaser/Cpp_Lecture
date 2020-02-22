// 9_Traits4
#include <iostream>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };

// �������� ��쿡 ó���� �Լ�.

template<typename T> void printv_pointer(T value)
{
	cout << value << " : " << *value << endl;
}

template<typename T> void printv_not_pointer(T value)
{
	cout << value << endl;
}

template<typename T> void printv(T value)
{
	// if ���� ����ð� ��� �Դϴ�.
	// if ( false ) �� �����Ǿ ������ �ÿ��� 
	//	if �� ��� ������� ����ɼ� �ִٰ� �����ϰ�
	//  ��� �Լ� ���ø��� �ν��Ͻ�ȭ �մϴ�.
	if (IsPointer<T>::value)
		printv_pointer(value);
	else
		printv_not_pointer(value);
}

int main()
{
	int n = 3;

	printv(n);  
}






