// 8_����ǥ���� - 29page
#include <algorithm>
#include <functional>  // less<>, greater<>���� �Լ���ü�� �ֽ��ϴ�
using namespace std;

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// 1. �Լ��� ����� ��å ����
	sort(x, x + 10, cmp1); // �ζ��� ġȯ �ȵ�
 
	// 2. �Լ���ü�� ����� ��å ����
	less<int> f; 
	sort(x, x + 10, f); // �ζ��� ġȯ

	// 3. C++11 : ���� ǥ���� - �ζ��� ġȯ��.
	// �Լ� ��ü�� �ڵ����� �������ִ� ǥ����.
	// Ŭ����(closure) : ���� ǥ�������� ������ �ӽð�ü.
	// [] : Lambda introducer
	sort(x, x + 10, [](int a, int b) { return a < b; } );

	// �����Ϸ��� ����� �ڵ�  �ڡڡڡڡ�
	class Lambda    // Ŭ���� �̸��� �����Ϸ��� ���Ƿ� ����
	{
	public:
	    const int operator()(int a, int b) const
		{
			return a < b;
		}
	};
	sort(x, x + 10, Lambda() ); // �ӽð�ü�� ����.
								// Ŭ�����̸�() : �ӽð�ü����
}






