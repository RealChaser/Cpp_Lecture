#include <iostream>
using namespace std;

// initializer_list는 생성자 인자로 널리 활용됩니다.

class Point
{
	int x, y;
public:
	explicit Point(int a, int b)            { cout << "int, int" << endl; }		  // 1
//	Point(initializer_list<int> e) { cout << "initializer_list" << endl; }// 2
};

int main()
{
//	Point p1(1, 1);    //  1  없으면 error
//	Point p2{ 1,1 };   //  2번, 없으면  1
	
//	Point p3({ 1, 1 });// 2번.. error.
						// 단, {1,1} 가 Point로 암시적 형변환 되서 1번 호출

//	Point p4 = { 1,1 }; // 
	Point p5(1,2,3);    // error
//	Point p6{ 1, 2,3 }; // ok..

	vector<int> v = { 1,2,3,4,5,6,7 };
}





