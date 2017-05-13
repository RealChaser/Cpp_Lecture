// 3_decltype
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// decltype�� �ش� ������ ������ �����ؼ� ��Ȯ�� Ÿ������ ������ �ش�.
	decltype(n) d1;  // int
	decltype(r) d2;  // int&  �ʱⰪ �����Ƿ� error
	decltype(c) d3;  // const inc  ""

	int x[3] = { 1,2,3 };

	// ������ ������ ?
	decltype(x) d4;			// 1. int d4[3]  ok
	decltype(x) d5 = x;     // 2. int d5[3] = x  error
}







