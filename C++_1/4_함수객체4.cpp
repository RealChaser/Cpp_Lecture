// 4_�Լ���ü3
#include <iostream>
#include <algorithm> 
#include <functional> // less<>, greater<>���� �Լ� ��ü�� �ֽ��ϴ�.
using namespace std;

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++98 style
	less<int> f;
	sort(x, x + 10, f);


	// c++11 STYLE  : ���� ǥ����(Lambda Expression) �̶�� ������� - 29page
	
	// [] : lambda introducer ��� �θ��ϴ�.

	sort(x, x + 10, [](int a, int b) { return a < b;} );


}






