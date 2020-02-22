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

int main()
{
	// �θ� : xtuple<char>          // 'A' ����
	// �θ� : xtuple<double, char>  // 2.3 ����
	xtuple<int, double, char> t3(1, 2.3, 'A'); // 1����


	cout << t3.value << endl; // 1

	cout << ((xtuple<double, char>&)t3).value << endl; // 2.3

	cout << ((xtuple<char>&)t3).value << endl;		  // A
}







