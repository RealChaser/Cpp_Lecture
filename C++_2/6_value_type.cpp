// 6_value_type
#include <iostream>
#include <vector>
#include <list>
using namespace std;
// 87 page
/*
void print(vector<int>& v)
{
	int n = v.front();
	cout << n << endl;
}
*/
/*
template<typename T> void print(vector<T>& v)
{
	T n = v.front();

	cout << n << endl;
}
*/

template<typename T> void print(T& v)
{
	// T             : list<double>
	// T::value_type : list<double>::value_type   => double

	// C++98 스타일
	typename T::value_type n = v.front();

	// C++11 스타일
	auto n = v.front();

	cout << n << endl;
}

int main()
{
	list<double> v = { 1,2,3,4,5 }; // C++11부터 이렇게 사용가능
	print(v);
}


// template 기반 컨테이너의 요소 타입을 외부에서 알수 있게 하려면..
template<typename T> class list
{
public:
	typedef T value_type; // 핵심..!!
	//......
};

list<int> s = { 1,2,3 };
list<int>::value_type n = s.front(); // 결국 n은 _int_ 타입 입니다.





