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
//	Point p1(1, 1); // 1�� ȣ��, ������ error
//	Point p2({ 1, 1 });// 2�� ȣ��, ������ error�� ���;� ������ conversion�߻�
//	Point p3{ 1, 1 }; // 2��ȣ��, ������ 1��.

//	Point p4(1, 2, 3); // error.
//	Point p5{ 1, 2, 3 }; // ok.. 2��.. ������ error

	Point p6 = { 1, 2, 3 }; // ok..2��

	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 }; // vector�� �����ڷ�
							// intializer_list�� ����ϰ� �ִ�.

}















