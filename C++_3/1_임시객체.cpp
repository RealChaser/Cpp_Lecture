// 1_임시객체 - 44 page
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
	//Point p(1, 2); // 일반 지역객체. 이름이 있다. {}의 끝에서 파괴
	//Point(1, 2);   // 임시객체. 이름이 없다. 문장의 끝에서 파괴

	Point(1, 2), cout << "X" << endl;

	cout << "A" << endl;
}




