#include <iostream>
#include <type_traits>
using namespace std;


template<typename T> void foo(T& a)
{
	if (is_array<T>::value)
		cout << "배열입니다." << endl;

	cout << typeid(T).name() << endl;
}

int main()
{
	int x[5];
	foo(x);
}






