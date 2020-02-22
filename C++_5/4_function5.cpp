// 4_function3
#include <iostream>
#include <functional> 
using namespace std;
using namespace std::placeholders; 

void f4(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
	function<void(int, int)> f;

	f = bind(&f4, 3, _2, _1, 7 ); // ? ä�켼��

	f(8, 4); // 3, 4, 8, 7 ������ �غ�����

	//
}







