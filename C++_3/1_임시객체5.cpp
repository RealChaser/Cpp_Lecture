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

// 임시객체와 함수 리턴

Point p(1, 1); // 전역 객체

//Point foo() // 값리턴 : 리턴용 임시객체 생성.
Point& foo()  // 참조리턴 : 임시객체를 만들지 말라는 의도
{					// 함수 호출을 lvalue에 놓을수 있다.
	return p;		// 주의 사항 : 지역객체를 참조로 리턴하면 안된다.
}

int main()
{
	foo().x = 10; // ??

	cout << p.x << endl; // 10

	cout << "A" << endl;
}











