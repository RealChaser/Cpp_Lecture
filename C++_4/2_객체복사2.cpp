// 2_��ü���� - 58 page
#include <iostream>
using namespace std;
// 60 page �׸�.

//    A. ���� ����

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


	// ���� ����� ������ ���� ������
	Cat(const Cat& c)
	{
		// 1. �����Ͱ� �ƴ� ����� �׳� ����
		age = c.age;
		
		// 2. ������ ����� �޸𸮸� ����
		name = new char[strlen(c.name) + 1];

		strcpy(name, c.name);
	}
};




int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1; 
}





