#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	Point() : Point(0, 0)
	{
		//Point(0, 0); //? �����ڿ��� �ٸ� ������ ȣ��.!!??				
					// ������ ȣ���� �ƴ� �ӽð�ü ����.
	}
};

int main()
{
	Point p;
	cout << p.x << endl;

	auto n = { 1 };
	auto n1{ 1 };
	cout << typeid(n).name() << endl;
	cout << typeid(n1).name() << endl;
}




