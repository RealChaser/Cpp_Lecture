// 3_begin - 195 page
#include <iostream>
#include <list>
#include <type_traits>
using namespace std;

// begin�� �Ϲ� �Լ���..



// ��� �����̳��� ��Ҹ� �����ϴ� �Լ�
template<typename T> void show(T& s)
{
	typename T::iterator p = s.begin(); 
	while (p != s.end())
	{
		cout << *p << endl;
		++p;
	}
}
int main()
{
	list<int> s = { 1,2,3,4,5,6,7,8,9,10 }; 
	show(s);

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	show(x);  //?
}





