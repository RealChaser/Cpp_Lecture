// 9_begin_end - 195page
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;


// �����̳� ����
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

// �迭 ����
template<typename T> void show_imp(T& c, true_type)
{
	auto p = c; // �迭�� �̸��� 1��° ����� �ּ�

	while (p != c + extent<T, 0>::value )
	{
		cout << *p << " ";
		++p;
	}
	cout << endl;
}

// ����ڰ� ����ϴ� ����
template<typename T> void show(T& c)
{
	// �迭 ������ �����ؼ� �Լ� �����ε�
	show_imp(c, is_array<T>());
}


int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	show(v);

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	show(x); //
}




