// 1_template_alias2
#include <iostream>
#include <set>
#include <functional>
using namespace std;

// typedef�� template�� �ȵ����� using �� ���ø� ����.

// C++11 using 
template<typename T> using SET = set<T, greater<T>>;


int main()
{
	SET<int>    s1; // set<int, greater<int>>
	SET<double> s2; // set<double, greater<double>>
}






