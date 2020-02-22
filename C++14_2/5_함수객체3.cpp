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

	// sort의 3번째 인자는 템플릿 입니다

	// 1. 정책으로 일반함수를 사용할때

	// 장점 : 정책을 변경해도  sort()는 한개
	// 단점 : 정책이 인라인 치환 안됨.
	sort(x, x + 10, cmp1); // sort(int*, int*, bool(*cmp)(int,int))라는 함수 생성
	sort(x, x + 10, cmp2); // sort(int*, int*, bool(*cmp)(int,int))라는 함수 생성

	// 2. 정책으로 함수객체를 사용할때
	Less    f1;
	Greater f2;
	sort(x, x + 10, f1); // sort(int*, int*, Less)
	sort(x, x + 10, f2); // sort(int*, int*, Greater)
}




