#include <iostream>
using namespace std;

// 1. ��� ����
#include <type_traits>

template<typename T> void foo_imp(T a, true_type)
{
	*a = 0;
	cout << "pointer" << endl;
}
template<typename T> void foo_imp(T a, false_type)
{
	cout << "not pointer" << endl;
}

template<typename T> void foo(T a)
{
	// ���� ��� 1. value ������
	// ���� : a�� ������ �� *a ��� ǥ������ ����Ҽ� ����.
	if ( is_pointer<T>::value )
		cout << "������" << endl;  
	else
		cout << "������ �ƴ�" << endl;


	// ���� ��� 2. �Լ� �����ε�  : *aǥ�� ��밡��
	foo_imp(a, is_pointer<T>() );
}

int main()
{
	int n = 0;
	foo(&n);
}

