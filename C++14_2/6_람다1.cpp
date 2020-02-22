// 7_람다
#include <iostream>
#include <functional> // 이안에 이미 less, greater가  있습니다.
using namespace std;

int main()
{
	int x[10] = { 1,2,3 };

	//sort(x, x + 10, cmp1); // 비교 정책으로 함수 전달

	less<int> f1;
	sort(x, x + 10, f1); // 비교 정책으로 함수객체 전달..

	// C++11 : 람다 표현식

	sort(x, x + 10, [](int a, int b) { return a < b;  });
}




