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

// �ӽð�ü�� �Լ�����
// ���� : �ӽð�ü�� ���� �������� �� �Ǵ� const & �� �Ǿ� �Ѵ�.
//        Point& �δ� ������ ����.
void foo(const Point& p)
{

}

int main()
{
//	Point p(1,2);
//	foo(p);

	foo(Point(1, 2)); // �Լ� ȣ���� ������ �ٷ� �ı� �ȴ�

	//sort(x, x + 10, less<int>());
	cout << "A" << endl;
}











