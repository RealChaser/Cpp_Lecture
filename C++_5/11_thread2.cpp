// 11_thread
#include <iostream>
#include <functional>
#include <thread>
using namespace std;

#include <mutex>
mutex m;
int x = 10; // ���� ����

// ����ȭ ��ü ���� ���ܰ� ������ deadlock�� �ֽ��ϴ�.
// ������ �Ҹ��ڷ� ����ȭ ��ü�� �����ؾ� �մϴ�.
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
	// x ���.
//	m.unlock();
}





int main()
{
	thread t1(foo);
	thread t2(foo);

	t1.join();
	t2.join();
}




