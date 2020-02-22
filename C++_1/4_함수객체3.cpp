// 4_함수객체3
#include <iostream>
#include <algorithm> // 이 안에 sort()가 있습니다
using namespace std;

// cmp1, cmp2, Less, Greater 복사 해오세요

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };


	// 1. 비교 정책으로 일반함수 사용
	// 장점 : 정책을 여러번 교체해도 sort()기계어 코드는 한개 이다.
	// 단점 : 정책이 인라인 치환 안된다.

	sort(x, x + 10, cmp1);// sort( int*, int*, bool(*)(int,int)) 인 함수생성
	sort(x, x + 10, cmp2);// sort( int*, int*, bool(*)(int,int)) 인 함수생성


	// 2. 비교 정책으로 함수 객체 사용
	// 단점 : 정책을 여러번 교체하면 sort()기계어 코드는 여러개 이다.
	// 장점 : 정책이 인라인 치환 된다.

	Less    f1;
	Greater f2;
	sort(x, x + 10, f1); // sort( int*, int*, Less) 생성..
	sort(x, x + 10, f2); // sort( int*, int*, Greater) 생성..

}





