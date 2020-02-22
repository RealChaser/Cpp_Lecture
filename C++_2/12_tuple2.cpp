#include <iostream>
using namespace std;

// �ٽ� 2 :

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


// xtuple�� ��Ҹ� �ϳ� �������� ���� �κ� ����ȭ
template<typename T> class xtuple<T>     // �θ� �ʿ� ����.
{
public:
	T value;
	xtuple() {}
	xtuple(const T& a) : value(a) {}
	static constexpr int N = 1;
};

int main()
{
	xtuple<int, double, char> t3(1, 2.3, 'A');

	xtuple<int> t1(1);
}

