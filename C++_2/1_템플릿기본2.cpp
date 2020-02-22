#include <iostream>
using namespace std;

template<typename T> T square(T a) { return a* a; }

int main()
{
	//printf("%p\n", square); // 될까요 ? error. square는 함수가 아닌 틀(template)
	
	printf("%p\n", square<int> );
	printf("%p\n", square<double>);
}