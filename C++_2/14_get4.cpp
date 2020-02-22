#include <iostream>
using namespace std;

template<typename T, typename ... Types>
class xtuple : public xtuple<Types...>  // xtuple<double, char>
{
	typedef xtuple<Types...> baseType;
public:
	T value;

	xtuple() {}
	xtuple(const T& a, const Types& ... args)
		: value(a), baseType(args...) {}

	static constexpr int N = baseType::N + 1;
};

template<typename T> class xtuple<T>
{
public:
	T value;
	xtuple() {}
	xtuple(const T& a) : value(a) {}
	static constexpr int N = 1;
};
//--------------------------------------------

// ��Ģ 1. ����ü tempalte�� ����� typedef�� �ִ´�.

template<int N, typename T> struct xtuple_element_type
{
	typedef T type;
};

// 2. N�� 0�϶��� ���� ��������.
//    �Ʒ� �ڵ��� ������.. T�� Ÿ�Ժ����� ���� �ȵǾ� �ִ�.
/*
template<typename T> struct xtuple_element_type<0, T>
{
typedef T type;
};
*/

// 3. �κ� ����ȭ�� ���ؼ� T�� Ÿ���� ���ϴ� ���·� ��������!!
// �ٽ� : 0��° ��� Ÿ���� ���ϱ� ����
// T => xtuple<T, Types...> �� �����ϴ� �κ� ����ȭ ���..!

template<typename T, typename ... Types>
struct xtuple_element_type<0, xtuple<T, Types...> >
{
	typedef T type;			// 0��° ��� Ÿ��
	typedef xtuple<T, Types...> tupleType; // 0��° �����ϴ� Ʃ�� Ÿ��
};

// N != 0 �϶�..
template<int N, typename T, typename ... Types>
struct xtuple_element_type<N, xtuple<T, Types...> >
{
	typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::type  type;

	typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::tupleType  tupleType;

};
//-----------------------------
template<int N, typename T> 
typename xtuple_element_type<N,T>::type& 
xget(T& tp) 
{
	return ((typename xtuple_element_type<N, T>::tupleType&)tp).value;
}
//#include <tuple> // �̾ȿ� ��� �ֽ��ϴ�.
int main()
{
	xtuple<int, double, char> t3(1, 2.3, 'A');

	xget<1>(t3) = 5.5;

	cout << xget<1>(t3) << endl;

}







