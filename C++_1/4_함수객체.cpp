// 4_�Լ���ü - 26 page
#include <iostream>
using namespace std;

// C++98 ���� 
class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	Plus p;
	int n = p(1, 2);  // ��ü�� �Լ� ó�� ���=> �Լ� ��ü(Functor)
	cout << n << endl;

	// a + b; // a.operator+ (b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2)
}


