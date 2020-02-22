// 6_스마트포인터 - 159 page
#include <iostream>
using namespace std;
// 1. template 으로 만들어야 한다.

// 2. 얕은 복사 문제를 해결해야 한다.

//    A. 깊은 복사  : 스마트포인터 만들때는 거의 사용안함.
//    B. 참조 계수  : 가장 널리 사용. shared_ptr<>
//    C. 소유권 이전: 널리 사용. ??
//    D. 복사 금지  : 널리 사용. ??

template<typename T> class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	~Ptr() { delete obj; }
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};

int main()
{
	Ptr<int> p = new int;
	*p = 10;
	cout << *p << endl;

	Ptr<int> p2 = p; // 얕은 복사
}







