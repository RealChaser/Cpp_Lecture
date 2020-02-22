// 3_인라인함수2  - 25 page
#include <algorithm>
using namespace std;


// 비교 정책을 함수인자로 전달 받자..!!
// 장점 : 비교 정책을 사용자가 변경할수 있다
// 단점 : 비교 정책함수는 인라인 치환될수 없다. 느리다.!!

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])
			if ( cmp(x[i], x[j]) ) // 비교 정책 함수 사용.
				swap( x[i], x[j] );
		}
	}
}
//-------------------
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, &cmp1);
}


