// 2_��ü���� - 58 page
#include <iostream>
using namespace std;
// 58 page �׸�.

//    C. ������ ����

class Cat
{
	char* name;
	int   age;
public:
	Cat(char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~Cat() { delete[] name; }


	// ������ ������ ���� ������ - ���� �߿��մϴ�

	Cat( Cat& c)   // const�� �����ϴ�.
	{
		name = c.name;
		age = c.age;

		c.name = 0;
		c.age  = 0;
	}
};






int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1;
}





