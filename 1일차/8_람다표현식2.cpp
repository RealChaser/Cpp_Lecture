#include <iostream>
using namespace std;

int main()
{
	// ����ǥ���� Ȱ��

	// 1. �Լ��� ��å���� ����
	//	sort(x, x + 10, [](int a, int b) { return a < b;  });

	// 2. auto  ������ ��Ƽ� �Լ� ó�� ��밡��
	auto f = [](int a, int b) { return a < b;  };
		// class Lambda{};Lambda();
	
	bool b = f(1, 2); // 1 < 2  �̹Ƿ� true
	cout << b << endl; // 1

	cout << typeid(f).name() << endl;
}



