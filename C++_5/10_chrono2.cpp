// 10_chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

template<int N1, int N2> struct xratio
{
	static constexpr int num = N1;
	static constexpr int den = N2;
};

int main()
{
	xratio<1, 10> r1; // 1/10

	// ratio : ������ �ð� �м� ���� �����ϴ� ���ø�

	ratio<1, 10> r2; // 1/10

	cout << ratio<2, 10>::num << endl; // 1
	cout << ratio<2, 10>::den << endl; // 5
}






