#include <iostream>
using namespace std;

	   int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

// �ζ��� �Լ��� �Լ� �����Ϳ� ������ ġȯ�ɼ� ����.

int main()
{
	Add1(1, 2); // ȣ�� 
	Add2(1, 2); // ġȯ

	int(*f )(int, int) = &Add2;

	
	//------------------------------
	int n; 
	cin >> n;
	if (n == 0) f = &Add1;
	//-------------------------
	f(1, 2); // ȣ�� 
}



