#include <iostream>
using namespace std;

// initializer_list�� ������ ���ڷ� �θ� Ȱ��˴ϴ�.

class Point
{
	int x, y;
public:
	explicit Point(int a, int b)            { cout << "int, int" << endl; }		  // 1
//	Point(initializer_list<int> e) { cout << "initializer_list" << endl; }// 2
};

int main()
{
//	Point p1(1, 1);    //  1  ������ error
//	Point p2{ 1,1 };   //  2��, ������  1
	
//	Point p3({ 1, 1 });// 2��.. error.
						// ��, {1,1} �� Point�� �Ͻ��� ����ȯ �Ǽ� 1�� ȣ��

//	Point p4 = { 1,1 }; // 
	Point p5(1,2,3);    // error
//	Point p6{ 1, 2,3 }; // ok..

	vector<int> v = { 1,2,3,4,5,6,7 };
}





