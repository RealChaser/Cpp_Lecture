#include <iostream>
using namespace std;

template<typename T> T square(T a) { return a* a; }

int main()
{
	//printf("%p\n", square); // �ɱ�� ? error. square�� �Լ��� �ƴ� Ʋ(template)
	
	printf("%p\n", square<int> );
	printf("%p\n", square<double>);
}