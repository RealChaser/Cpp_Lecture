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
	// function ���� bind()�� ����ϴ� ��쵵 ���� �����ϴ�.
	bind(&f4, _1, _3, _2, 4)(1,2,3);  // 1, 3, 2, 4

	bind(&f4, _1, 1 , 2 , 3 )(6); // 6, 1,2,3 ������ �غ�����..
}







