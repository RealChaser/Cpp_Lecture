// 1_template_alias2
#include <iostream>
#include <set>
#include <functional>
#include <type_traits>
using namespace std;

// C++14 부터 모든 Traits를 아래 처럼 using 별칭으로 제공합니다.
// 102 - 104 page
/*
template<typename T> 
using remove_pointer_t = typename remove_pointer<T>::type;
*/

template<typename T> void foo(T a)
{
	// T에서 포인터를 제거한 타입의 변수 n을 만들어 보세요
	//typename remove_pointer<T>::type n;
	remove_pointer_t<T> n;

}

int main()
{
	int n = 10;

	foo(&n);
}






