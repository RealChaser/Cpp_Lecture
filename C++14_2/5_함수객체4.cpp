#include <stdio.h>

// cl 5_함수객체4.cpp    /FAs   /Ob1   


struct Less    { inline bool operator()(int a, int b) { return a < b; }};
struct Greater { inline bool operator()(int a, int b) { return a > b; }};
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }

template<typename T> void foo(T f)
{
	bool b = f(1, 2);
	printf("결과 : %d\n", b);
}
int main()
{
	Less    f1;
	Greater f2;

	foo(cmp1);
	foo(cmp2); 
	foo(f1);   
	foo(f2);   
}
// 1. 기계어 코드에는 foo 함수가 몇개 일까요 ?
// 2. 각각의 foo에서 f(1,2)의 인라인 치환 여부를 생각해 보세요 
// 3. 기계어 코드에는 foo를 제외한 함수가 몇개 있을까요 ?






