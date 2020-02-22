#include <iostream>
#include <algorithm> 
using namespace std;

struct Less    { inline bool operator()(int a, int b) { return a < b; }};
struct Greater { inline bool operator()(int a, int b) { return a > b; }};

inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }


int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// sort�� 3��° ���ڴ� ���ø� �Դϴ�

	// 1. ��å���� �Ϲ��Լ��� ����Ҷ�

	// ���� : ��å�� �����ص�  sort()�� �Ѱ�
	// ���� : ��å�� �ζ��� ġȯ �ȵ�.
	sort(x, x + 10, cmp1); // sort(int*, int*, bool(*cmp)(int,int))��� �Լ� ����
	sort(x, x + 10, cmp2); // sort(int*, int*, bool(*cmp)(int,int))��� �Լ� ����

	// 2. ��å���� �Լ���ü�� ����Ҷ�
	Less    f1;
	Greater f2;
	sort(x, x + 10, f1); // sort(int*, int*, Less)
	sort(x, x + 10, f2); // sort(int*, int*, Greater)
}




