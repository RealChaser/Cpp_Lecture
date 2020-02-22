#include <iostream>
#include <set>
#include <functional>
using namespace std;

typedef set<int, greater<int>> SET;
typedef set<double, greater<double>> SET_DOUBLE;

template<typename T> typedef set<T, greater<T>> SET<T>;

template<typename T> 
using SET = set<T, greater<T>>;

int main()
{
	//set<int, greater<int>> s;  // 내부적으로 들어오는 data를 비교 하기 위해 less<>사용
	SET<int> s;
	set<double, greater<double>> s;
	s.insert(10);
	s.insert(20);

	//set<int, greater<int>>::iterator p = s.begin();
	SET::iterator p = s.begin();
}






