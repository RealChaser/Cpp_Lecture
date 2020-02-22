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

// 임시객체와 함수인자
// 주의 : 임시객체를 전달 받으려면 값 또는 const & 가 되야 한다.
//        Point& 로는 받을수 없다.
void foo(const Point& p)
{

}

int main()
{
//	Point p(1,2);
//	foo(p);

	foo(Point(1, 2)); // 함수 호출이 끝나면 바로 파괴 된다

	//sort(x, x + 10, less<int>());
	cout << "A" << endl;
}











