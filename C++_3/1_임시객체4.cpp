// 1_�ӽð�ü - 44 page
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

// �ӽð�ü�� �Լ� ����
// 1. p1 ������
// 2. p  ������
// 3. �ӽð�ü�� ����� ���� ���� ������
// 4. p �Ҹ���
// 5. �ӽð�ü �Ҹ���
// 6. A
// 7. p1 �Ҹ��� 
Point foo()
{
	// ���� �����Ϸ��� �̸��ִ� ��ü�� RVO�� ����ȭ ���ټ� �ֽ��ϴ�.
	// NRVO( Named RVO )
	Point p(0, 0);
	return p; // �̼��� ���Ͽ����� ����� �ӽð�ü�� �����˴ϴ�
			  // return Point(p);  ���Ͽ� �ӽð�ü�� �Լ� ȣ�⹮���� �������ı�

	// ����� �������� ����, ����鼭 ��������!!
	// RVO(Return Value Optimization) �̶�� ���
	//return Point(0, 0); // ���Ͽ� �ӽð�ü�� ������.!
}

int main()
{
	Point p1;
	p1 = foo();
	cout << "A" << endl;
}











