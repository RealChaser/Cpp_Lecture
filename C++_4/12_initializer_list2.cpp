// 12_initializer_list -  208
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;


class Point
{
public:
	Point(int, int)               { cout << "int, int" << endl; }
	Point(initializer_list<int> ) { cout << "initializer_list<int>" << endl; }
};

int main()
{
//	Point p1(1, 1); // 1번 호출, 없으면 error
//	Point p2({ 1, 1 });// 2번 호출, 없으면 error가 나와야 하지만 conversion발생
//	Point p3{ 1, 1 }; // 2번호출, 없으면 1번.

//	Point p4(1, 2, 3); // error.
//	Point p5{ 1, 2, 3 }; // ok.. 2번.. 없으면 error

	Point p6 = { 1, 2, 3 }; // ok..2번

	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 }; // vector의 생성자로
							// intializer_list를 사용하고 있다.

}















