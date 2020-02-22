// 1_임시객체 - 44 page
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
	// 임시객체의 특징
//	Point p;
//	p.x = 10; // ok..

	//Point().x = 20; // error. 임시객체는 lvalue가 될수 없다.
/*

	Point* p1 = &p;      // ok
	Point* p2 = &Point();// error. 임시객체는 주소연산자를 사용할수 없다.
						// 주의 : VC++에서는 언어확장을 꺼야 합니다.

	Point& r1 = p;      // ok
	Point& r2 = Point();// error. 임시객체는 참조 할수없습니다.

	*/
	const Point& cp = Point(); // ok.. 임시객체는 상수 참조로 참조할수 있다.
						// 이 경우 임시객체의 수명은 cp의 수명으로 연장..
						// 단, 임시객체를 가르킬때 상수성이 추가되어 가르킨다

	// C++11 상수성 추가없이 임시객체 가르키는 참조 문법.
	Point&& cp2 = Point(); // rvalue reference!!

	cout << "A" << endl;
}




