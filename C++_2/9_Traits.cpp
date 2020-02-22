// 9_Traits -  95 page
#include <iostream>
using namespace std;

template<typename T> void printv(T value )
{
	if (T is Pointer)
		cout << value << " : " << *value << endl;
	else
		cout << value << endl;
}

int main()
{
	int n = 3;
	double d = 3.4;

	printv(n);
	printv(d);
	printv(&n);
}




