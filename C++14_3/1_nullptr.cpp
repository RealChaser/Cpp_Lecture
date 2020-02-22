#include <iostream>
using namespace std;

// cafe.naver.com/cppmaster "넥슨" 3일차 사전 소스 받으시면 됩니다.
// 1번째 소스만 빼고 모두 빌드 제외해 주세요..




void foo(int a)   { cout << "int" << endl; }
void foo(void* a) { cout << "void*" << endl; }
void goo(char* a) { cout << "goo" << endl; }

int main()
{
	int  n = 0;  // ok.. 0은 정수
	int* p1 = 0; // ok.. 0 은 포인터 로 암시적 형변환
//	int* p2 = 10;// error.

	foo(0); // int
	foo((void*)0); // void*

//#define NULL (void*)0   // C의 NULL

#if __cplusplus
	#define NULL 0
#else
	#define NULL (void*)0  
#endif


	foo(NULL); // void*
	goo(NULL); // C : void* => 다른 타입* 암시적 변환 됨.
			   // C++ : void* => 다른 타입* 암시적 변환 안됨.
}