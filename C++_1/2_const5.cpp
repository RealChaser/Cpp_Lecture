// 2_const5- 6page
#include <iostream>
using namespace std;

// ����Լ��� �ʿ伺 - C++98 �̾߱�

class Point
{
public:
	int x = 0, y = 0; // C++11���� ����. field initialize
	
	void set(int a, int b) { x = a; y = b; }


	void print()  const // ��� �Լ�..
	{
		//x = 10; // error. ����Լ������� ����� ���� ���� ����.
		cout << x << ", " << y << endl;
	}
};

int main()
{
	const Point p;
	p.x = 10;     // error.
	p.set(10, 20);// error
	p.print();		// ��� ��ü�̸� ����Լ� print()�� ȣ���Ҽ� ����.
					// ���� ������� ����� �����Ǵ��� �˼� ����.
				// print()�� ����ϰ� �Ϸ��� �ݵ�� ��� �Լ��̾�� �Ѵ�.

	// "��� ��ü�� ��� �Լ��� ȣ���Ҽ� �ִ�."  - 6 page�Ʒ� �κ�.
}




