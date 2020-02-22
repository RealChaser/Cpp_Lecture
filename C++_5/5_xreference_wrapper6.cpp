// 5_reference_wrapper - 145 page
#include <iostream>
#include <functional>
using namespace std;

void goo(int& r) { r = 30; }


void foo(int  a) { cout << "foo " << a << endl; }


int main()
{
	function<void()> f;
	int n = 0;

	//logTime(foo, n); // �̼��� foo(n)��  ȣ��˴ϴ�.
					   // n�� ������ �޾Ƽ� ����..


	f = bind(foo, n); // �̼��� n�� ��򰡿� ����(������)�ϰ� �ֽ��ϴ�.
	f(); // foo(n)


	f = bind(goo, ref(n)); // n�� ������ �����ش޶�� �ǹ�.
			// �����δ� n�� �ּҸ� �����ϰ� �ְ� �ȴ�.(reference_wrapperŸ������)
			// n�� �ּҰ� �ٽ� int&�� ��ȯ �Ǿ� �ϱ� ������
			// reference_wrappr�� �ʿ� �ߴ�!!


	f = bind(goo, &n); // �ּҸ� ���������� goo(int&)�� �ٽ� ������ ����.
						// �ּ� => int& ��ȯ�� �ȵǹǷ�

}





