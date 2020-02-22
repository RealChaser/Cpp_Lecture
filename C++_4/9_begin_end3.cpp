// 9_begin_end - 195page
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;

/*
// �Ϲ� �Լ� begin
template<typename T> auto begin(T& c) { return c.begin(); }
template<typename T> auto end(T& c)   { return c.end(); }

// �迭 ���� �Ϲ� �Լ�
template<typename T, int N> auto begin(T(&r)[N]) { return r; }
template<typename T, int N> auto end(  T(&r)[N]) { return r + N; }
*/

// STL ����
// C++98 ��� : s.begin()
// C++11 ��� : begin(s)

template<typename T> void show(T& c)
{
	auto p = begin(c); //c.begin();

	while (p != end(c)) // c.end())
	{
		cout << *p << " ";
		++p;
	}
	cout << endl;
}



int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	show(v);

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	show(x); //
}




