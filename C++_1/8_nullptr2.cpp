#include <iostream>
using namespace std;

int main()
{
	int* p1 = nullptr; // ������ 0�� ��Ÿ���� ��.
	//int n = nullptr; // error
	bool b = nullptr; // ??? ok.. bool�� �Ͻ��� ��ȯ ����.

	// Ű���带 ������ ��� ��Ҵ� Ÿ���� �ִ�.
	cout << typeid(nullptr).name() << endl;

	nullptr_t a = nullptr;

	int* p2 = a; // nullptr_t�� ��� Ÿ���� �����Ϳ� bool�� �Ͻ��� ��ȯ�ȴ�.
}









