// 9_Traits4
#include <iostream>
using namespace std;

template<typename T> struct IsPointer    { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*>{ static constexpr bool value = true;};

template<typename T> void printv(T value)
{
	if ( IsPointer<T>::value )   // if ( false )
		cout << value << " : " << *value << endl;
	else
		cout << value << endl;
}

int main()
{
	int n = 3;

	printv(n);  // 1

	//printv(&n); // 2
}






