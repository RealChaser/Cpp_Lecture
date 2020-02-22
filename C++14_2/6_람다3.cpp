#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
	int x[10] = { 1,2,3 };
	
	// ���ٰ� Ȱ��Ǵ� ���
	// 1. �Լ��� ���ڷ� ���
	sort(x, x + 10, [](int a, int b) { return a < b;});


	// 2. auto ������ ��Ƽ� �Լ� ó�� ���
	auto f = [](int a, int b) { return a + b; };
				//class ClosureType{}; ClosureType();


	cout << f(1, 2) << endl; // 3   f.operator()(1,2)

	// 3. ()�����ڸ� ���� ȣ��.. ()������ �ּ� ���
	int n = f.operator()(1, 2);
	cout << n << endl;

	cout << typeid(f).name() << endl;

	printf("%p\n", &decltype(f)::operator());
}





/*
class ClosureType  
{
public:
	inline int operator()(int a, int b) const
	{
		return a + b;
	}
};
*/

