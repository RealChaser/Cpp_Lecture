#include <stdio.h>

// cl 5_�Լ���ü4.cpp    /FAs   /Ob1   


struct Less    { inline bool operator()(int a, int b) { return a < b; }};
struct Greater { inline bool operator()(int a, int b) { return a > b; }};
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }

template<typename T> void foo(T f)
{
	bool b = f(1, 2);
	printf("��� : %d\n", b);
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
// 1. ���� �ڵ忡�� foo �Լ��� � �ϱ�� ?
// 2. ������ foo���� f(1,2)�� �ζ��� ġȯ ���θ� ������ ������ 
// 3. ���� �ڵ忡�� foo�� ������ �Լ��� � ������� ?






