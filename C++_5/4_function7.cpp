// 4_function3
#include <iostream>
#include <functional> 
#include <algorithm>
using namespace std;
using namespace std::placeholders;

// ���� �Լ� : ���ڰ� �Ѱ��� �Լ�
// ���� �Լ� : ���ڰ� 2���� �Լ�
bool foo(int a) { return a % 3 != 0; }

int main()
{
	int x[10] = { 3, 6, 9, 4, 1, 2, 3, 4, 5, 6 };

	// x ���� 3�� ����� �ƴ� ù��° ���ڸ� ã�� �ʹ�.
	//int* p = find(x, x + 10, 3 ); // ���� �˻�.


	//int* p = find_if(x, x + 10, foo); // ���� �˻�.

	// 1. �ٸ� �Լ��� ���ڷ� �������� �Լ� ���� �Լ���ü(����)�� ������
	// 2. % ������ �ϴ� �Լ� ��ü�� �̹� STL�� �ִ�.

	modulus<int> m;
	cout << m(10, 3) << endl; // 10 % 3

	//int* p = find_if(x, x + 10, m); // �ɱ�� ??

	//int* p = find_if(x, x + 10, bind(m, _1, 3 ) ); 


	// �Ʒ� �ڵ带 ��Ȯ�� ���� �ؾ� �մϴ�.
	int* p = find_if(x, x + 10, bind(modulus<int>(), _1, 3));

	cout << *p << endl;
}







