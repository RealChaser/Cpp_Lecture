#include <iostream>
using namespace std;

int main()
{
	int n = 0;

	cin >> n;  // 'a' �� �Է��ϸ� ?
	
	//if ( cin.fail() ) cout << "����" << endl;

	if (cin) // cin.operator void*()�� ��ȯ
		cout << "����" << endl;

	cout << n << endl;
}

class istream
{
public:
	//operator bool() { ������ ? true : false; }
	//operator void*() { ������ ? this : 0; }  => C++ 98

	operator �Լ�������Ÿ��() { ������ ? �ƹ��Լ��ּҳ����� : 0; }
};
istream cin;

// if���� �ֱ� ���� bool�� ��ȯ �ߴ�. if (cin) // ok..
cin << n; 

// if���� ������ shift���� �Ұ����ϰ� ����
//delete cin; // ?

// boost ���� ���� : �Լ������ͷκ�ȯ..










