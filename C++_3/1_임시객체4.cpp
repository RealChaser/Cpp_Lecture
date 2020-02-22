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
// 1. p1 생성자
// 2. p  생성자
// 3. 임시객체를 만들기 위한 복사 생성자
// 4. p 소멸자
// 5. 임시객체 소멸자
// 6. A
// 7. p1 소멸자 
Point foo()
{
	// 요즘 컴파일러는 이름있는 객체도 RVO로 최적화 해줄수 있습니다.
	// NRVO( Named RVO )
	Point p(0, 0);
	return p; // 이순간 리턴용으로 사용할 임시객체가 생성됩니다
			  // return Point(p);  리턴용 임시객체는 함수 호출문장의 끝에서파괴

	// 만들고 리턴하지 말고, 만들면서 리턴하자!!
	// RVO(Return Value Optimization) 이라는 기술
	//return Point(0, 0); // 리턴용 임시객체만 만들자.!
}

int main()
{
	Point p1;
	p1 = foo();
	cout << "A" << endl;
}











