#include <iostream>
using namespace std;

template<typename T, typename ... Types>
class xtuple : public xtuple<Types...>
{
	typedef xtuple<Types...> baseType;
public:
	T value;
	xtuple() {}
	xtuple(const T& a, const Types& ... args) : value(a), baseType(args...) {}

	static constexpr int N = baseType::N + 1;
};

// ���ڰ� �Ѱ��� ���� ���ؼ� �κ� ����ȭ
template<typename T> class xtuple<T>
{
public:
	T value;
	xtuple() {}
	xtuple(const T& a) : value(a) {}
	static constexpr int N = 1;
};

// tuple�� N��° ��� Ÿ���� ���ϴ� ���
template<int N, typename T> struct xtuple_element;
//{
//	typedef T type;
//};

// �κ� ����ȭ�� ���� Ÿ���� ����.
// 1. 0���� Ÿ�� ���� ���Ѵ�.
template<typename T, typename ... Types>
struct xtuple_element<0, xtuple<T, Types...>>
{
	typedef T type;
	typedef xtuple<T, Types...> tupleType;
};

template<int N, typename T, typename ... Types> 
struct xtuple_element<N, xtuple<T, Types...>>
{
	typedef typename xtuple_element<N-1, xtuple<Types...>>::type type;
	typedef typename xtuple_element<N-1, xtuple<Types...>>::tupleType tupleType;
};


//xtuple_element<1, xtuple<int, char, long>>::type n; // int ���;� �մϴ�.

template<int N, typename T>  // T �� Ʃ���Դϴ�.
typename xtuple_element<N, T>::type&
xget(T& tp)
{
	return ((typename xtuple_element<N, T>::tupleType&)tp).value;
}

int main()
{

	xtuple<int, double, char> t(3, 3.4, 'c');

	double d = xget<1>(t);
	cout << d << endl;
}

