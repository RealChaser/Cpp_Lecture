// 10_tuple
#include <iostream>
using namespace std;

template<typename ... Types> class xtuple
{

};

int main()
{
	xtuple<int, int, int> t3;
	xtuple<int, int> t2;
}

