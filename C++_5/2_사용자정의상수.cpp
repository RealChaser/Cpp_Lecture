// 2_��������ǻ��
#include <string>
#include <iostream>
using namespace std;

// user define literal
class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};
// 226 page ���� ǥ ����..
// ���� literal : �ݵ�� unsigned long long���� �޾ƾ� �Ѵ�.
Meter operator""_m(unsigned long long n) // 64 ��Ʈ ����
{
	return Meter(static_cast<int>(n) );
}


int main()
{
	Meter m = 3_m; // operator""m(3) �̶�� �Լ��� ã�� �ȴ�

//	Meter m = 3cm;
//	Gram  g = 3gram;
}





