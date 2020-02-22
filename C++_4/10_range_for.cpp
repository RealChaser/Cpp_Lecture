// 10_range_for - 201 page
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;



int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (auto n : x)
		cout << n << endl;

	// 위처럼 만들면 컴파일러가 아래코드처럼 컴파일 합니다.
	for (auto p = begin(x); p != end(x); ++p)
	{
		auto n = *p;

		cout << n << endl;
	}
}





