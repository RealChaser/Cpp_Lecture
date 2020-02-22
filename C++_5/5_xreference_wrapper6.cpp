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
					   // n을 참조로 받아서 전달..


	f = bind(foo, n); // 이순간 n을 어딘가에 보관(값으로)하고 있습니다.
	f(); // foo(n)


	f = bind(goo, ref(n)); // n을 참조로 보관해달라는 의미.
			// 실제로는 n의 주소를 보관하고 있게 된다.(reference_wrapper타입으로)
			// n의 주소가 다시 int&로 변환 되야 하기 때문에
			// reference_wrappr가 필요 했다!!


	f = bind(goo, &n); // 주소를 보관하지만 goo(int&)에 다시 보낼수 없다.
						// 주소 => int& 변환이 안되므로

}





