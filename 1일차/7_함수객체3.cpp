#include <algorithm>
using namespace std;

inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less { inline bool operator()(int a, int b) { return a < b; } };
struct Greater { inline bool operator()(int a, int b) { return a > b; } };

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// STL의 sort()의 모든 인자는 template 입니다.

	// 1. 비교 정책으로 일반함수를 사용할때
	// 장점 : 정책 변경이 가능
	// 단점 : inline적용이 안된다. 
	sort(x, x + 10, cmp1);// 
	sort(x, x + 10, cmp2);// 


	// 2. 비교 정책으로 함수객체를 사용할때
	// 장점 :  inline이 적용되고 정책 변경이 가능
	// 단점 : 코드량이 늘어난다.
	Less    f1;
	Greater f2;
	sort(x, x + 10, f1);// 
	sort(x, x + 10, f2);// 
}






