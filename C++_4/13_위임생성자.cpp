// 13_위임생성자 - 216 page
#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	Point() : Point(0,0)   // 위임생성자(delegating constructor)문법
	{
		//Point(0, 0); // 다른 생성자 호출. 할수 없다.
					 // 임시객체를 만드는 표현이다.
	}
};

int main()
{
	Point p;
	cout << p.x << endl; // 
}





