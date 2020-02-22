// 6_완벽한전달자장점
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

// 임시객체1에서 Point 복사해오세요
class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()                                 { cout << "~Point()" << endl; }

	Point(const Point&) { cout << "Point(Point)" << endl; }
};

int main()
{
	vector<Point> v;

	// vector에 요소 넣기1.
//	Point p(1,2);
//	v.push_back(p);

	// 2. 임시객체로 넣기 - 객체는 2개 이다.
	//v.push_back(Point(1, 2));
	
	// 3. Point를 만드는데 필요한 생성자 인자만 전달한다.
	v.emplace_back(   1, 2); // 1,2로 Point를 만들어서 vector가 보관.

}





