#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	Point() : Point(0, 0)
	{
		//Point(0, 0); //? 생성자에서 다른 생성자 호출.!!??				
					// 생성자 호출이 아닌 임시객체 생성.
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




