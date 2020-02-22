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
	~Point() { cout << "~Point()" << endl; }

	Point(const Point&) { cout << "Point(Point)" << endl; }
};

void* operator new( size_t sz)
{
	cout << "new 사용, 크기 : " << sz << endl;
	
	return malloc(sz);
}
void operator delete(void* p) { free(p); }

int main()
{
	//shared_ptr<Point> p( new Point(1, 2) ); // 이순간 메모리할당은 몇번될까요 ?


	// sizeof(Point) + sizeof(관리객체)를 한번에 할당하고
	// 메모리 윗부분의 Point 부분만 명시적으로생성자 호출해달라는것
	// (placement new)
	shared_ptr<Point> p = make_shared<Point>( 1, 2);
}

// www.boost.org  에 접속해 보세요



