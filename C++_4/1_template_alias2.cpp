// 1_template_alias2
#include <iostream>
#include <set>
#include <functional>
using namespace std;

typedef set<int, greater<int>> SET;
typedef set<double, greater<double>> SET_DOUBLE;

// 아래 코드가 되면 좋지 않을까? - 안된다!!
template<typename T> typedef set<T, greater<T>> SET;

SET<int> s1;
SET<double> s2;

int main()
{
	set<double, greater<double>> sd;

	// set<int> s;
	//set<int, greater<int>> s;   // RB Tree
	SET s;

	s.insert(10);
	s.insert(5);
	s.insert(20);

	//set<int, greater<int>>::iterator p = s.begin();
	SET::iterator p = s.begin();

	while (p != s.end())
	{
		cout << *p << endl;
		++p;
	}
}