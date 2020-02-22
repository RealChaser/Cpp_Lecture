// 5_reference_wrapper - 145 page
#include <iostream>
#include <functional>
using namespace std;

void goo(int& r) { r = 30; }


void foo(int  a) { cout << "foo " << a << endl; }


int main()
{
	function<void()> f;
	int n = 0;

	//logTime(foo, n); // 이순간 foo(n)이  호출됩니다.
					   // n의 변경을 생각할 필요 없다. 
					   // n을 참조로 받아서 전달한다(완벽한 전달)
	
	f = bind(foo, n); // 이순간 n을 어딘가에 보관(값으로)하고 있습니다.
	n = 10;
	f(); // 보관된 n을 꺼내서 foo(n)을 호출합니다.
		 // foo 0 

	// bind가 인자를 값으로 보관하기 때문에 문제점.
	// f = bind(goo, n);
	f = bind(goo, ref(n)); // n을 참조로 보관해 달라

	f(); // goo(n)    n을 30으로 변경하고 있습니다. 하지만..


	cout << n << endl;
}





