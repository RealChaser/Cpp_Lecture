#include <iostream>
using namespace std;

// C++11�� ����Ʈ������ ���
#include <memory>

int main()
{
	//shared_ptr<int> p1 = new int; // error. explicit ������
	shared_ptr<int> p1(new int); // ok.

	*p1 = 10;
	shared_ptr<int> p2 = p1; // �̼��� �����������

	cout << *p2 << endl;
}




