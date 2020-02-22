// 5_reference_wrapper3
#include <iostream>
using namespace std;

// 참조로 형변환 가능한 포인터 역활의 객체.

template<typename T> class xreference_wrapper
{
	T* obj;
public:
	xreference_wrapper(T& r) : obj(&r) {}

	operator T&() { return *obj; }
};

int main()
{
	int n = 10;

//	int* p = &n;
//	int& r = p; // p는 n의 주소를 담고 있다. 그런데 참조로 변환될수 없다.

	xreference_wrapper<int> rw(n); // n의 주소 보관.
	int& r = rw; // rw.operator int&()
}








