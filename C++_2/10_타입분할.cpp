// 10_Ÿ�Ժ���
#include <iostream>
#include <type_traits>
using namespace std;

// traits ����
// 1. T�� �Ӽ� ����
// 2. T�� ������(������) Ÿ�� ���

template<typename T> void foo(T a)
{
	// is_pointer<T>::value

	// T���� �����͸� ������ Ÿ�Ծ��
	typename remove_pointer<T>::type n;

	cout << typeid(n).name() << endl;
}

int main()
{
	int n = 0;
	foo(&n);
}




