#include <iostream>
using namespace std;


template<typename TP> void print_count(TP& t)
{
	cout << TP::N << endl;
}


int main()
{
	xtuple<int, short, double> t3(1, 2, 3.4); 
	print_count(t3);	 
	cout << t3.N << endl;
}






