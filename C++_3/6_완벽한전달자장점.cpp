// 6_�Ϻ�������������
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

// �ӽð�ü1���� Point �����ؿ�����
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

	// vector�� ��� �ֱ�1.
//	Point p(1,2);
//	v.push_back(p);

	// 2. �ӽð�ü�� �ֱ� - ��ü�� 2�� �̴�.
	//v.push_back(Point(1, 2));
	
	// 3. Point�� ����µ� �ʿ��� ������ ���ڸ� �����Ѵ�.
	v.emplace_back(   1, 2); // 1,2�� Point�� ���� vector�� ����.

}





