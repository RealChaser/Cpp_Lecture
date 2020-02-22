#include <iostream>
using namespace std;

// int2type�� �����Ǿ C++11�� ǥ���� �˴ϴ�. - 99 page
/*
template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;  // enum ��� static constexpr
};

//integral_constant<int,   1> n1;
//integral_constant<int,   0> n0;
//integral_constant<short, 0> s0;

// true/false          : �� ������ ��Ÿ���� ��. ���� Ÿ��
// true_type/fale_type : �������� ��Ÿ���� Ÿ��. �ٸ� Ÿ��
typedef integral_constant<bool, true>  true_type;
typedef integral_constant<bool, false> false_type;


// is_pointer �����
template<typename T> struct is_pointer     : false_type {  };
template<typename T> struct is_pointer<T*> : true_type {};
*/

#include <type_traits> // �� �ȿ� ���� ��� ��Ұ� �ֽ��ϴ�. - 99 page ����

//----------------------------------------------
template<typename T> void printv_imp(T value, true_type )
{
	cout << value << " : " << *value << endl;
}
template<typename T> void printv_imp(T value, false_type )
{
	cout << value << endl;
}

template<typename T> void printv(T value)
{
	//printv_imp(value, int2type< IsPointer<T>::value >());

	printv_imp(value, is_pointer<T>() ); // !!
}

int main()
{
	int n = 3;

	printv(n);
}








