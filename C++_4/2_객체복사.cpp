// 2_��ü���� - 58 page
#include <iostream>
using namespace std;
// 58 page �׸�.

// 1. Ŭ���� �ȿ� ������ ����� ������ ����Ʈ ���� �����ڴ� ���� ���� ������ �ִ�

// 2. ����ڰ� ���� �����ڸ� ���� �ذ��ؾ� �Ѵ�.

//    A. ���� ����
//    B. ���� ���
//    C. ������ ����
//    D. ���� ����.

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
};

int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1; // runtime error
}





