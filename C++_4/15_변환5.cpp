// 12_initializer_list -  208
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;


class Point
{
public:
	explicit Point(int, int) { cout << "int, int" << endl; }
	//Point(const Point&) { }
};

int main()
{
	Point p2( { 1, 1 } );// 왜 에러가 없을까요 ?

		// 1. Point p2( {1,1} => Point 변환).
	    // 2. Point p2( 임시객체)

}















