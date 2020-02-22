// 5_reference_wrapper3
#include <iostream>
using namespace std;

template<typename T> class xreference_wrapper
{
	T* obj;
public:
	xreference_wrapper(T& r) : obj(&r) {}
	operator T&() { return *obj; }
};

// C++ 참조         : 한번 참조한 곳은 변경될수 없다. 
//					  대입연산을 수행하면 참조의 이동이 아닌 값의 이동이다

// reference_wapper : 이동가능한 참조
//					  대입연산을 수행하면 참조가 이동한다.
//					  원리는 결국 주소를 보관하는 것.
//					  진짜 참조로 암시적 형변환 가능.

int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;
//	int& r2 = n2;

	xreference_wrapper<int> r1 = n1;
	xreference_wrapper<int> r2 = n2;

	r1 = r2; // 값의 이동? 참조의 이동 ?

	cout << n1 << endl; // 20   10
	cout << n2 << endl; // 20   20
	cout << r1 << endl; // 20   20
	cout << r2 << endl; // 20   20

	// 진짜 참조와 호환가능
	int& r3 = r1; // ok..
}










