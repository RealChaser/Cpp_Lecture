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
					   // n�� ������ ������ �ʿ� ����. 
					   // n�� ������ �޾Ƽ� �����Ѵ�(�Ϻ��� ����)
	
	f = bind(foo, n); // �̼��� n�� ��򰡿� ����(������)�ϰ� �ֽ��ϴ�.
	n = 10;
	f(); // ������ n�� ������ foo(n)�� ȣ���մϴ�.
		 // foo 0 

	// bind�� ���ڸ� ������ �����ϱ� ������ ������.
	// f = bind(goo, n);
	f = bind(goo, ref(n)); // n�� ������ ������ �޶�

	f(); // goo(n)    n�� 30���� �����ϰ� �ֽ��ϴ�. ������..


	cout << n << endl;
}





