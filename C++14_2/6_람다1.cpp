// 7_����
#include <iostream>
#include <functional> // �̾ȿ� �̹� less, greater��  �ֽ��ϴ�.
using namespace std;

int main()
{
	int x[10] = { 1,2,3 };

	//sort(x, x + 10, cmp1); // �� ��å���� �Լ� ����

	less<int> f1;
	sort(x, x + 10, f1); // �� ��å���� �Լ���ü ����..

	// C++11 : ���� ǥ����

	sort(x, x + 10, [](int a, int b) { return a < b;  });
}




