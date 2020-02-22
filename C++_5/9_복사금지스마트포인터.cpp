// 9_복사금지스마트포인터

#include <iostream>
using namespace std;

//    D. 복사 금지  : 널리 사용. ??

template<typename T> class xunique_ptr
{
	T* obj;
public:
	// 복사 금지
	xunique_ptr(const xunique_ptr&) = delete;
	void operator=(const xunique_ptr&) = delete;
public:
	inline explicit xunique_ptr(T* p = 0) : obj(p) {}
	inline ~xunique_ptr() { delete obj; }

	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
};
int main()
{
	xunique_ptr<int> p(new int);
	*p = 10;
//	xunique_ptr<int> p2 = p; // error. 
}







