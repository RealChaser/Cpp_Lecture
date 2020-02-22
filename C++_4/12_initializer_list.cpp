// 12_initializer_list -  208
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;

void foo(initializer_list<int> e)
{
	for (auto n : e)
		cout << n << endl;
}

int main()
{
	initializer_list<int> e = { 1,2,3,4,5 };
	foo(e);

	foo( { 1,2,3 } );
}







