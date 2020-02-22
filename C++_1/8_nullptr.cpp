// 8_nullptr - 190 page

#include <iostream>
using namespace std;

void foo(int   a) { cout << "int" << endl;  }
void foo(void* a) { cout << "void*" << endl; }
void goo(char* p) { cout << "goo" << endl; }

int main()
{
	int* p1 = 0; // ok. 0은 포인터로 암시적 형변환 
//	int* p2 = 10;// error.

	foo(0);        // int
	foo((void*)0); // void*

/*
#define NULL (void*)0
	foo(NULL);
	goo(NULL); // C ok..    : void* => 다른 타입* 로 암시적 형변환된다.
			   // C++ error : void* => 다른 타입* 로 암시적 형변환 될수없다.
*/

	// C++환경의 NULL
/*
#ifdef __cplusplus
	#define NULL 0
#else
	#define NULL (void*)0
#endif
*/
	goo(NULL); // ok.. 하지만...
	foo(NULL); // int
}






