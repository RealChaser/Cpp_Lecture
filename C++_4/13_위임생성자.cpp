// 13_���ӻ����� - 216 page
#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	Point() : Point(0,0)   // ���ӻ�����(delegating constructor)����
	{
		//Point(0, 0); // �ٸ� ������ ȣ��. �Ҽ� ����.
					 // �ӽð�ü�� ����� ǥ���̴�.
	}
};

int main()
{
	Point p;
	cout << p.x << endl; // 
}





