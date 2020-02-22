#include <iostream>
#include <string>
#include <memory>
using namespace std;

/*
int main()
{
	shared_ptr<int> p1(new int);

	{
		shared_ptr<int> p2 = p1;

		cout << p1.use_count() << endl; // 참조계수 출력  2
	}

	cout << p1.use_count() << endl; // 1
	
}
*/



int main()
{
	weak_ptr<int> wp; // 참조계수가 증가하지 않는 스마트 포인터
	{
		shared_ptr<int> sp(new int);
		
		wp = sp; // 참조계수 증가 안함

		cout << wp.use_count() << endl; // 1
		
	}
	/*
	// wp 사용하기 : 자원이 파괴되지 않았는지 확인하고 사용한다.
	if (wp.use_count() > 0) 
	{
		// 여기까지 객체가 살아 있을수 있지만..
		// 다른 스레드가 shared_ptr<>로 객체를 가르키고 있었고
		// 해당 스레드에서 스마트 포인터가 파괴될수도 있다.!!
		// wp 사용해도 될까요 ?? 절대 안된다.
		
		// wp를 사용못하게 하기 위해서 -> * 연산자가 없다.
	
	}
	*/

	// weak_ptr 사용방법

	shared_ptr<int> sp2 = wp.lock(); // 멀티스레드 안전하게 lock

	if (sp2)
	{
		cout << "객체가 살아 있다.." << endl;
		*sp2 = 10;
	}
	else
		cout << "객체 파괴" << endl;


	cout << wp.use_count() << endl;
}













