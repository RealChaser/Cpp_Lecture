#include <algorithm>
using namespace std;

inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less { inline bool operator()(int a, int b) { return a < b; } };
struct Greater { inline bool operator()(int a, int b) { return a > b; } };

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// STL�� sort()�� ��� ���ڴ� template �Դϴ�.

	// 1. �� ��å���� �Ϲ��Լ��� ����Ҷ�
	// ���� : ��å ������ ����
	// ���� : inline������ �ȵȴ�. 
	sort(x, x + 10, cmp1);// 
	sort(x, x + 10, cmp2);// 


	// 2. �� ��å���� �Լ���ü�� ����Ҷ�
	// ���� :  inline�� ����ǰ� ��å ������ ����
	// ���� : �ڵ差�� �þ��.
	Less    f1;
	Greater f2;
	sort(x, x + 10, f1);// 
	sort(x, x + 10, f2);// 
}






