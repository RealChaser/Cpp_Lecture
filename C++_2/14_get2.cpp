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
// �ᱹ �ʿ��Ѱ��� Ư�� Ʃ���� N��° ����� Ÿ���� �����ΰ� ?
//							       �θ� Ÿ���� �����ΰ� ?
template<int N, typename T> N��°���Ÿ��& xget(T& tp) // T�� Ʃ���Դϴ�.
{
	return ((N��°�θ�Ÿ��&)tp).value;
}

int main()
{
	xtuple<int, double, char> t3(1, 2.3, 'A'); 


	double d = xget<1>(t3); // t3�� 2��° ��Ұ��� ������ �Լ�

}







