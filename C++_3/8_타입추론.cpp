// 8_Ÿ���߷� - 121 page
#include <iostream>
using namespace std;

void goo( int a) { }
// ��Ģ 1. ���ø� ���ڰ� ��Ÿ������ �Ǿ� ������ - 129
//         ���ڷ� ���޵Ǵ� ǥ����(��ü), ����, const, volatile �Ӽ��� �����ϰ�
//         Ÿ�԰���.
template<typename T> void foo(T a) 
{
	a = 30;
}

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // T�� int
	foo(r); // T�� int
	foo(c); // T�� int
	foo(cr);// T�� int

	const char* const ptr = "hello";

	foo(ptr); // T : const char* => ������ ptr�� ������� ���� - 129 page
				
}





