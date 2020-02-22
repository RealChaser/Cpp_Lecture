// 11_thread
#include <iostream>
#include <functional>
#include <thread>
using namespace std;

#include <mutex>
mutex m;
int x = 10; // 전역 변수

// 동기화 객체 사용시 예외가 나오면 deadlock이 있습니다.
// 생성자 소멸자로 동기화 객체를 관리해야 합니다.
/*
template<typename T> struct lock_guard
{
	T& obj;

	lock_guard(T& a) : obj(a) { obj.lock(); }
	~lock_guard()			  { obj.unlock(); }
};
*/
void foo()
{
	lock_guard<mutex> lg(m);
//	m.lock();
	// x 사용.
//	m.unlock();
}





int main()
{
	thread t1(foo);
	thread t2(foo);

	t1.join();
	t2.join();
}




