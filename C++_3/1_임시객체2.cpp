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
int main()
{
	// �ӽð�ü�� Ư¡
//	Point p;
//	p.x = 10; // ok..

	//Point().x = 20; // error. �ӽð�ü�� lvalue�� �ɼ� ����.
/*

	Point* p1 = &p;      // ok
	Point* p2 = &Point();// error. �ӽð�ü�� �ּҿ����ڸ� ����Ҽ� ����.
						// ���� : VC++������ ���Ȯ���� ���� �մϴ�.

	Point& r1 = p;      // ok
	Point& r2 = Point();// error. �ӽð�ü�� ���� �Ҽ������ϴ�.

	*/
	const Point& cp = Point(); // ok.. �ӽð�ü�� ��� ������ �����Ҽ� �ִ�.
						// �� ��� �ӽð�ü�� ������ cp�� �������� ����..
						// ��, �ӽð�ü�� ����ų�� ������� �߰��Ǿ� ����Ų��

	// C++11 ����� �߰����� �ӽð�ü ����Ű�� ���� ����.
	Point&& cp2 = Point(); // rvalue reference!!

	cout << "A" << endl;
}




