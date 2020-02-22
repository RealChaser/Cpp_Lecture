#include <iostream>
#include <memory>
#include <windows.h> // win32 api
#include <type_traits>
using namespace std;


class Point
{
	int x, y;
public:
	// ��� new - Point�� ���鶧�� �� �Լ��� �޸� �Ҵ��� �޶�
	static void* operator new( size_t sz)
	{
		cout << "Point new" << endl;
		return malloc(sz);
	}
	static void operator delete(void* p) { free(p); }
};

int main()
{
	//shared_ptr<Point> p1(new Point); // �޸� �Ҵ��� 2�� �߻��Ѵ�.
							     	 // ��ü, ������ü(�������)

	// ��ü + ������ü�� ���ӵ� �޸𸮿� �Ҵ�
	// void* p = operator new( sizeof(Point) + sizeof(������ü))
	shared_ptr<Point> p2 = make_shared<Point>(); // ���������ڰ� ������
											     // ( )������ ����
	// ���� 1 : �����ڸ� �����Ҽ� ����.
	// ���� 2 : ��� new�� ������ �ص� ���� new�� ����ϰ� �ȴ�.
	//			�������� �Լ��� ȣ����� �ʴ´�.
}








