// 3_����ǥ����3
#include <iostream>
using namespace std;

// ���ٿ� Ÿ��- 30 page
// �ٽ� ) ��� ���� ǥ������ �ٸ� Ÿ���̴�.
int main()
{

	auto f1 = [](int a, int b) { return a + b; }; //class lambda-xxx
	
	// ���� ǥ�������� �ʱ�ȭ�� ������ ����ɼ� ����.
	f1 = [](int a, int b) { return a + b; }; // error

	decltype(f1) f3 = f1; //decltype�� ���� Ŭ������ �̸��� �����ϰ� �ؼ� �ٸ� ���� �ʱ�ȭ ����

	auto f2 = [](int a, int b) { return a + b; }; //class lambda-xxxxxxxx

	// f1, f2 �� �ٸ� Ÿ��. ���ٴ� ������ ���Ƶ� ���� �� ������ �ٸ� Ŭ���� �̸����� ������
	cout << typeid(f1).name() << endl;
	cout << typeid(f2).name() << endl;
}






