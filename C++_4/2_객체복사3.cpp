// 2_��ü���� - 58 page
#include <iostream>
using namespace std;
// 58 page �׸�.
//    B. ���� ��� - 61 page �׸�

class Cat
{
	char* name;
	int   age;
	int*  ref;
public:
	Cat(char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);

		ret = new int(1); // �Ѱ��� 1�� �ʱ�ȭ
	}

	// ��������� ����� ���� ������
	Cat(const Cat& c)
	{
		// 1. ��� ����� ���� ���� �Ŀ�
		name = c.name;
		age = c.age;
		ref = c.ref;

		// 2. ������� ����
		++(*ref);
	}

	// ��������� �Ҹ���
	~Cat() 
	{
		if (--(*ref) == 0)
		{
			delete[] name;  // �ڿ�
			delete ref;     // ������ü(�������) ����.
		}
	}
};



int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1; 
}





