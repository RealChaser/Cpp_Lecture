#include <iostream>
#include <memory>
#include <windows.h> // win32 api
#include <type_traits>
using namespace std;

void foo(int* p) { cout << "foo" << endl; free(p); }

int main()
{
	// 1. ������ ���� - ���� �Լ�(�Լ���ü)����
	shared_ptr<int> p1(new int);
	shared_ptr<int> p2((int*)malloc(100), foo); // �ڿ� ���� �Լ� ����
	shared_ptr<int> p3((int*)malloc(100), free); 

	// ���ٵ� ���� ����.
	shared_ptr<int> p4(new int[100], [](int* p) { delete[] p;} );


	shared_ptr<FILE> p5(fopen("aaa.txt", "wt"), fclose);

	// window/linux ���� api �� ����
	HANDLE h = CreateEvent(0, 0, 0, 0);
	CloseHandle(h);

	// HANDLE�� ��¥ ������ �϶��� ������ ���.
	shared_ptr<remove_pointer<HANDLE>::type> p5(CreateEvent(0,0,0,0),
												CloseHandle);

}








