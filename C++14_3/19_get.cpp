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


template<int N, typename T>  // T �� Ʃ���Դϴ�.
����Ÿ��(T�� ���� N����� Ÿ��&)
xget(T& tp)
{
	return ((TP�� N��° �θ���Ÿ��&)tp).value;
}

int main()
{
	//                  xtuple<char>      // 'c'
	//          xtuple<double, char>      // 3.4
	xtuple<int, double, char> t(3, 3.4, 'c'); // 3����
	 
	cout << t.value << endl; // 3
	cout << ((xtuple<double, char>&)t).value << endl; // 3.4

	
	double d = xget<1>(t); // t�� 1��° �� ������
	cout << d << endl; // 3.4
}






// cafe.naver.com/cppmaster ����

// 19_get.cpp �ҽ� �ٽ� �޾� ������...
