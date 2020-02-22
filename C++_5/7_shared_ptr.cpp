#include <iostream>
#include <memory>
#include <windows.h> // win32 api
#include <type_traits>
using namespace std;

void foo(int* p) { cout << "foo" << endl; free(p); }

int main()
{
	// 1. 삭제자 변경 - 단항 함수(함수객체)전달
	shared_ptr<int> p1(new int);
	shared_ptr<int> p2((int*)malloc(100), foo); // 자원 해지 함수 전달
	shared_ptr<int> p3((int*)malloc(100), free); 

	// 람다도 전달 가능.
	shared_ptr<int> p4(new int[100], [](int* p) { delete[] p;} );


	shared_ptr<FILE> p5(fopen("aaa.txt", "wt"), fclose);

	// window/linux 전용 api 와 연동
	HANDLE h = CreateEvent(0, 0, 0, 0);
	CloseHandle(h);

	// HANDLE이 진짜 포인터 일때만 가능한 기법.
	shared_ptr<remove_pointer<HANDLE>::type> p5(CreateEvent(0,0,0,0),
												CloseHandle);

}








