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
	~Point() { cout << "~Point()" << endl; }

	Point(const Point&) { cout << "Point(Point)" << endl; }
};

void* operator new( size_t sz)
{
	cout << "new ���, ũ�� : " << sz << endl;
	
	return malloc(sz);
}
void operator delete(void* p) { free(p); }

int main()
{
	//shared_ptr<Point> p( new Point(1, 2) ); // �̼��� �޸��Ҵ��� ����ɱ�� ?


	// sizeof(Point) + sizeof(������ü)�� �ѹ��� �Ҵ��ϰ�
	// �޸� ���κ��� Point �κи� ��������λ����� ȣ���ش޶�°�
	// (placement new)
	shared_ptr<Point> p = make_shared<Point>( 1, 2);
}

// www.boost.org  �� ������ ������



