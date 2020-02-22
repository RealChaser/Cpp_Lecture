#include <iostream>
using namespace std;

// cafe.naver.com/cppmaster "�ؽ�" 3���� ���� �ҽ� �����ø� �˴ϴ�.
// 1��° �ҽ��� ���� ��� ���� ������ �ּ���..




void foo(int a)   { cout << "int" << endl; }
void foo(void* a) { cout << "void*" << endl; }
void goo(char* a) { cout << "goo" << endl; }

int main()
{
	int  n = 0;  // ok.. 0�� ����
	int* p1 = 0; // ok.. 0 �� ������ �� �Ͻ��� ����ȯ
//	int* p2 = 10;// error.

	foo(0); // int
	foo((void*)0); // void*

//#define NULL (void*)0   // C�� NULL

#if __cplusplus
	#define NULL 0
#else
	#define NULL (void*)0  
#endif


	foo(NULL); // void*
	goo(NULL); // C : void* => �ٸ� Ÿ��* �Ͻ��� ��ȯ ��.
			   // C++ : void* => �ٸ� Ÿ��* �Ͻ��� ��ȯ �ȵ�.
}