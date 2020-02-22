// 10_tuple
#include <iostream>
using namespace std;

// �ٽ� : ù��° ���ø� ���ڴ� �ݵ�� ������ Ÿ���̾�� �Ѵ�.

// �Ѱ� ����
/*
template<typename T, typename ... Types> class xtuple
{
public:
	T value;

	xtuple() {}
	xtuple(T& a) : value(a) {}

	constexpr int N = 1;
};
*/

template<typename T, typename ... Types> 
class xtuple : public xtuple<Types...>
{
	typedef xtuple<Types...> baseType;
public:
	T value;
	xtuple() {}
	xtuple(const T& a, const Types& ... args ) : value(a), baseType(args...) {}

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

int main()
{
	xtuple<int, double, int> t3(1, 3.4, 3);

	xtuple<double, int> t;
}




// tuple : ���� �ٸ� Ÿ�� N���� data�� �����ϴ� �����̳�