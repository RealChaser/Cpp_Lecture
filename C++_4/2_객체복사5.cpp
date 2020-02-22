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


	// C++11 : ������ ���� �����ڿܿ� Move �����ڶ�� ���ο� ������ ���Ե˴ϴ�

	// ���� ������ : ���� ���� �Ǵ� ��������� �����մϴ�
	Cat(const Cat& c)
	{
		cout << "���� ������" << endl;

		age = c.age;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}

	// Move ������ : ������ ������ ������� �����մϴ�.
	//Cat(Cat& c)   // �̷��� �ϸ� Cat c2 = c1 �� �ڵ尡 ���簡�ƴ� Moveȣ��
	Cat(Cat&& c)  // �׷��� �̷��� ������ �ߴ�!!
	{
		cout << "Move ������" << endl;
		name = c.name;
		age = c.age;
		c.name = 0;
		c.age = 0;
	}
};

Cat foo()
{
	Cat c("AA", 2);
	return c;
}
int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1;  // Cat c2(c1), ���� �����ڰ� ȣ��Ǿ�� �Ѵ�.

	Cat c3 = static_cast<Cat&&>(c1); //move ������ ȣ��

	Cat c4 = foo(); // ���簡 ȿ�����ϱ�� ? Move�� ȿ�����ϱ��
					// ���� �� �ʿ� ����. move�� ����.!

					// foo()�� �ӽð�ü�� �����ϹǷ� 
					// rvalue �̴�. �ڵ����� Move������ ȣ��.
}





