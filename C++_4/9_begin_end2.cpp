// 9_begin_end - 195page
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;


// 컨테이너 버전
template<typename T> void show_imp(T& c, false_type)
{
	typename T::iterator p = c.begin();

	while (p != c.end())
	{
		cout << *p << " ";
		++p;
	}
	cout << endl;
}

// 배열 버전
template<typename T> void show_imp(T& c, true_type)
{
	auto p = c; // 배열의 이름은 1번째 요소의 주소

	while (p != c + extent<T, 0>::value )
	{
		cout << *p << " ";
		++p;
	}
	cout << endl;
}

// 사용자가 사용하는 버전
template<typename T> void show(T& c)
{
	// 배열 인지를 조사해서 함수 오버로딩
	show_imp(c, is_array<T>());
}


int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	show(v);

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	show(x); //
}




