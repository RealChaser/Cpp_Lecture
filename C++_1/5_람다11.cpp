// 5_����11
// 5_����
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;


//int Add(auto a, auto b) { return a + b; } // error. �Ϲ��Լ����ڴ� auto�ȵ�.


int main()
{
	// ���� ǥ������ ���ڷ� auto�� ������ �ֽ��ϴ�.
	auto f1 = [](auto a, auto b) { return a + b;};

	cout << f1(1, 3.4) << endl;


	// ���������� auto�� Closure�� ()�����ڸ� template���� ����� �˴ϴ�.
	class LambdaClass
	{
	public:
		template<typename T1, typename T2>
		inline auto operator()(T1 a, T2 b) const -> decltype(a + b)
		{
			return a + b;
		}
	};
}













