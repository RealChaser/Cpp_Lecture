#include <iostream>
#include <memory>
#include <windows.h> // win32 api
#include <type_traits>
using namespace std;


class Point
{
	int x, y;
public:
	// 멤버 new - Point를 만들때는 이 함수로 메모리 할당해 달라
	static void* operator new( size_t sz)
	{
		cout << "Point new" << endl;
		return malloc(sz);
	}
	static void operator delete(void* p) { free(p); }
};

int main()
{
	//shared_ptr<Point> p1(new Point); // 메모리 할당이 2번 발생한다.
							     	 // 객체, 관리객체(참조계수)

	// 객체 + 관리객체를 연속된 메모리에 할당
	// void* p = operator new( sizeof(Point) + sizeof(관리객체))
	shared_ptr<Point> p2 = make_shared<Point>(); // 생성자인자가 있으면
											     // ( )안으로 전달
	// 단점 1 : 삭제자를 변경할수 없다.
	// 단점 2 : 멤버 new를 재정의 해도 전역 new를 사용하게 된다.
	//			재정의한 함수가 호출되지 않는다.
}








