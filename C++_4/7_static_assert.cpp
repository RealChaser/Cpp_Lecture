// 7_static_assert- 186 page
#include <iostream>
#include <cassert>
using namespace std;

// C++11 ������ �ð� assert

static_assert(sizeof(double) > 16, "double�� 16byte �̻��̾�� �մϴ�");


void foo(int age)
{
	// �Լ� ���ڴ� ������� ��ȿ���� �����ϴ� ���� ����.
	assert(age > 0);

	int* p = new int[age];
}

int main()
{
	foo(-10);
}
