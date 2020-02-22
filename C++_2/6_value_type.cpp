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

	// C++98 ��Ÿ��
	typename T::value_type n = v.front();

	// C++11 ��Ÿ��
	auto n = v.front();

	cout << n << endl;
}

int main()
{
	list<double> v = { 1,2,3,4,5 }; // C++11���� �̷��� ��밡��
	print(v);
}


// template ��� �����̳��� ��� Ÿ���� �ܺο��� �˼� �ְ� �Ϸ���..
template<typename T> class list
{
public:
	typedef T value_type; // �ٽ�..!!
	//......
};

list<int> s = { 1,2,3 };
list<int>::value_type n = s.front(); // �ᱹ n�� _int_ Ÿ�� �Դϴ�.





