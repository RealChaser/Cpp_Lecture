// 8_nullptr - 190 page

#include <iostream>
using namespace std;

void foo(int   a) { cout << "int" << endl;  }
void foo(void* a) { cout << "void*" << endl; }
void goo(char* p) { cout << "goo" << endl; }

int main()
{
	int* p1 = 0; // ok. 0�� �����ͷ� �Ͻ��� ����ȯ 
//	int* p2 = 10;// error.

	foo(0);        // int
	foo((void*)0); // void*

/*
#define NULL (void*)0
	foo(NULL);
	goo(NULL); // C ok..    : void* => �ٸ� Ÿ��* �� �Ͻ��� ����ȯ�ȴ�.
			   // C++ error : void* => �ٸ� Ÿ��* �� �Ͻ��� ����ȯ �ɼ�����.
*/

	// C++ȯ���� NULL
/*
#ifdef __cplusplus
	#define NULL 0
#else
	#define NULL (void*)0
#endif
*/
	goo(NULL); // ok.. ������...
	foo(NULL); // int
}






