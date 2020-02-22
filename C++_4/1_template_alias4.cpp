// 1_template_alias2
#include <iostream>
#include <set>
#include <functional>
#include <type_traits>
using namespace std;

// C++14 ���� ��� Traits�� �Ʒ� ó�� using ��Ī���� �����մϴ�.
// 102 - 104 page
/*
template<typename T> 
using remove_pointer_t = typename remove_pointer<T>::type;
*/

template<typename T> void foo(T a)
{
	// T���� �����͸� ������ Ÿ���� ���� n�� ����� ������
	//typename remove_pointer<T>::type n;
	remove_pointer_t<T> n;

}

int main()
{
	int n = 10;

	foo(&n);
}






