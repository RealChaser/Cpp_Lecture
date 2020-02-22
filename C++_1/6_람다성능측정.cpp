// 5_람다성능측정
#include <algorithm>
#include <iostream>
#include <functional>
#include "logTime.h"  // cafe.naver.com/cppmaster 에서
					 // LG전자 게시판에서 받아서 현재 폴더에 놓으세요.
using namespace std;

inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }

void test1(int cnt)
{
	int x[1000] = { 1,3,5,7,9,2,4,6,8,10 };

	for (int i = 0; i < cnt; i++)
	{
		sort(x, x + 1000, cmp1);
		sort(x, x + 1000, cmp2);
	}
}

void test2(int cnt)
{
	int x[1000] = { 1,3,5,7,9,2,4,6,8,10 };

	less<int>    f1;
	greater<int> f2;
	for (int i = 0; i < cnt; i++)
	{
		sort(x, x + 1000, f1);
		sort(x, x + 1000, f2);
	}
}
void test3(int cnt)
{
	int x[1000] = { 1,3,5,7,9,2,4,6,8,10 };

	for (int i = 0; i < cnt; i++)
	{
		sort(x, x + 1000, [](int a, int b) { return a < b; } );
		sort(x, x + 1000, [](int a, int b) { return a > b; });
	}
}

int main()
{
//	test1(1000);
	logTime(test2, 1000);
	logTime(test3, 1000);
	logTime(test1, 1000);
}

