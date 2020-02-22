// 9_begin_end - 195page
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;


template<typename T> void show(T& c)
{
	// range for 
	for (auto n : c)
		cout << n << " ";

	cout << endl;
}



int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	show(v);

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	show(x); //
}




