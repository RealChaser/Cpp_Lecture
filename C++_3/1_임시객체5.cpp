// 1_�ӽð�ü - 44 page
#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
	Point(const Point&) { cout << "Point(Point)" << endl; }
};

// �ӽð�ü�� �Լ� ����

Point p(1, 1); // ���� ��ü

//Point foo() // ������ : ���Ͽ� �ӽð�ü ����.
Point& foo()  // �������� : �ӽð�ü�� ������ ����� �ǵ�
{					// �Լ� ȣ���� lvalue�� ������ �ִ�.
	return p;		// ���� ���� : ������ü�� ������ �����ϸ� �ȵȴ�.
}

int main()
{
	foo().x = 10; // ??

	cout << p.x << endl; // 10

	cout << "A" << endl;
}











