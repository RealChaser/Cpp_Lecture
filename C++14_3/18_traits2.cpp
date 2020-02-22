#include <iostream>
using namespace std;

int f1(double a, char c, short s) { return 0; }

// �Լ��� ���� Ÿ�� ���ϱ�.
// 1. ����� �ڵ带 �����ؼ� primary template �����
template<typename T> struct result_type
{
	typedef T type;
};
/*
template<typename A, typename B, typename C, typename D> 
struct result_type<A(B,C,D)>
{
	typedef A type;
};
*/


template<typename A, typename ... Types>
struct result_type<A(Types...)>
{
typedef A type;
};

// primary template
template<int N, typename T> struct argument_type
{
	typedef T type;
};

// �Ʒ� ó�� �κ� ����ȭ �ϸ� �ȵȴ�. - N��°�� ���Ҽ��� ����.
/*
template<int N, typename R, typename A, typename ... Types> 
struct argument_type<N, R(A, Types...)>
{
	typedef T type;
};
*/

// 0��° ���� Ÿ�� ���ϱ�.
template<typename R, typename A, typename ... Types>
struct argument_type<0, R(A, Types...)>
{
	typedef A type;
};

// N���� ���ϱ�..  N�� 1���̰� 1��° ���ڸ� �����ϰ� �ٽ� ���..
// N�� 0�� �ڸ� ���� �κ� ����ȭ ���..
template<int N, typename R, typename A, typename ... Types>
struct argument_type<N, R(A, Types...)>
{
	typedef typename argument_type<N-1, R(Types...)>::type type;
};


template<typename T> void foo(T& a) // int(double, char, short)
{
	// �Լ��� ���� Ÿ�� ���ϱ�.
//	typename result_type<T>::type ret;
//	cout << typeid(ret).name() << endl;

	// 1��° ���� Ÿ�� ���ϱ�
	typename argument_type<2, T>::type b;
	cout << typeid(b).name() << endl;
}

int main()
{
	foo(f1);
}