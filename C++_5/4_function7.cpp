// 4_function3
#include <iostream>
#include <functional> 
#include <algorithm>
using namespace std;
using namespace std::placeholders;

// 단항 함수 : 인자가 한개인 함수
// 이항 함수 : 인자가 2개인 함수
bool foo(int a) { return a % 3 != 0; }

int main()
{
	int x[10] = { 3, 6, 9, 4, 1, 2, 3, 4, 5, 6 };

	// x 에서 3의 배수가 아닌 첫번째 숫자를 찾고 싶다.
	//int* p = find(x, x + 10, 3 ); // 값만 검색.


	//int* p = find_if(x, x + 10, foo); // 조건 검색.

	// 1. 다른 함수의 인자로 보낼때는 함수 보다 함수객체(람다)가 빠르다
	// 2. % 연산을 하는 함수 객체는 이미 STL에 있다.

	modulus<int> m;
	cout << m(10, 3) << endl; // 10 % 3

	//int* p = find_if(x, x + 10, m); // 될까요 ??

	//int* p = find_if(x, x + 10, bind(m, _1, 3 ) ); 


	// 아래 코드를 정확히 이해 해야 합니다.
	int* p = find_if(x, x + 10, bind(modulus<int>(), _1, 3));

	cout << *p << endl;
}







