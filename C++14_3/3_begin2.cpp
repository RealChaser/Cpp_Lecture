#include <iostream>
#include <list>
#include <type_traits>
using namespace std;
/*
// ����� �ƴ� begin/end  �Լ�
template<typename T> auto begin(T& c) { return c.begin(); }
template<typename T> auto end(T& c)   { return c.end(); }

// �迭 ����.
template<typename T, int N> auto begin( T(&c)[N]) { return c; }
template<typename T, int N> auto end(   T(&c)[N]) { return c + N; }
*/

/*
template<typename T> void show(T& s)
{
	auto p = begin(s);  // s.begin();

	while (p != end(s)) //  s.end())
	{
		cout << *p << endl;
		++p;
	}
}
*/
template<typename T> void show(T& s)
{
	// range for ���
	for (auto n : s)   // java, C#�� foreach
		cout << n << endl;
}


int main()
{
	list<int> s = { 1,2,3,4,5,6,7,8,9,10 }; 
	show(s);

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	show(x);  //?
}







