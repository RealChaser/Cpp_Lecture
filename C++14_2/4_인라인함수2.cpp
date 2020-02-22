#include <algorithm>
using namespace std;

// 라이브러리 설계자를 생각해 봅시다.
// 1. 성능. 빨라야 한다.
// 2. 유연성. 정책 변경이 가능해야 한다.

void Sort(int* x, int n, bool(*cmp)(int, int) ) 
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			
			//if ( x[i] > x[j])
			if( cmp(x[i], x[j]) )  
				swap( x[i], x[j] );
}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	
	Sort(x, 10);
	Sort(x, 10);
}




