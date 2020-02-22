// 10_chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// 아래 구조체 크기는 ? - 4byte.. 
//                      static constexpr은 메모리에 놓이지 않는다.
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



