#include <iostream>
using namespace std;

// �ٽ� 1 : 1��° ���ڴ� �ݵ�� ������ Ÿ������ �ؾ� �Ѵ�.

template<typename T, typename ... Types> class xtuple
{
public:
	T value;

	xtuple() {}
	xtuple(const T& a) : value(a) {}

	static constexpr int N = 1;
};

int main()
{
	xtuple<int, double, char> t3;
}





