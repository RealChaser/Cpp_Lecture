// 1_�ӽð�ü - 44 page
#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()            { cout << "~Point()"     << endl; }
	Point(const Point&) { cout << "Point(Point)" << endl; }
};
int main()
{
	//Point p(1, 2); // �Ϲ� ������ü. �̸��� �ִ�. {}�� ������ �ı�
	//Point(1, 2);   // �ӽð�ü. �̸��� ����. ������ ������ �ı�

	Point(1, 2), cout << "X" << endl;

	cout << "A" << endl;
}




