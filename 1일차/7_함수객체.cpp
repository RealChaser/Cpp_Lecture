#include <iostream>
using namespace std;
// �Լ� ��ü : ()�����ڸ� ����ؼ� �Լ� ó�� ��밡���Ѱ�
//				�Լ�������, �Լ� ����, ����Լ�������, ����Լ� ����
//				()�����ڸ� �������� Ŭ����(����ü)
// C++17 : callable object ��� �� ���������� �����Ŵ.
struct Plus
{
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	Plus p;
	int n = p(1, 2);  // p.operator()(1,2) �� ����
	cout << n << endl;	
}



