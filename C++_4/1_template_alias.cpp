// 1_template_alias - 121 page
/*
int a;
int x[10];
void foo(int);

// typedef : 변수위치의 심볼을 타입으로 해달라.
typedef int a;
typedef int x[10];
typedef void foo(int);

x ar; // int ar[10]
*/
// C++98
//typedef int DWORD;
//typedef void(*PF)();

// C++11
using DWORD = int;
using PF = void(*)();


int main()
{
	DWORD n;
	PF    f;
}
