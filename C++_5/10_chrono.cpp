// 10_chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// �Ʒ� ����ü ũ��� ? - 4byte.. 
//                      static constexpr�� �޸𸮿� ������ �ʴ´�.
struct xratio
{
	int data;
	static constexpr int num = 10;
	static constexpr int den = 20;
};

int main()
{
	cout << sizeof(xratio) << endl;
}



