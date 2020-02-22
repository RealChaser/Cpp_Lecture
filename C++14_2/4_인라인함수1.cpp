#include <iostream>
using namespace std;

	   int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

// 인라인 함수라도 함수 포인터에 담으면 치환될수 없다.

int main()
{
	Add1(1, 2); // 호출 
	Add2(1, 2); // 치환

	int(*f )(int, int) = &Add2;

	
	//------------------------------
	int n; 
	cin >> n;
	if (n == 0) f = &Add1;
	//-------------------------
	f(1, 2); // 호출 
}



