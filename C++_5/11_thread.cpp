// 11_thread
#include <iostream>
#include <functional>
#include <thread>
using namespace std;

void foo(int a, int b, double d)
{
	cout << "foo : " << this_thread::get_id()  << endl;
	this_thread::sleep_for(1s); // this_theread 는 namespace 입니다.
	cout << "end foo" << endl;
}

int main()
{
	//thread t(foo); // 스레드 생성.
	//thread t(bind(foo, 1, 2, 3.4));
	thread t(foo, 1, 2, 3.4);

	Dialog dlg;
	thread t(bind(&Dialog::goo, &dlg, 1)); // dlg.goo(1 )

	t.join(); // 스레드 종료 대기
}




