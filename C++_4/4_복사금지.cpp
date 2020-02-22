// 4_������� - 

#include <iostream>
using namespace std;

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


	// private ���� ������ : ���縦 ������ ����ϴ� ���
//private:
//	Cat(const Cat& c);   // �ٽ�.. ���� �Ѵ�.!

public:
//private:
	// C++11�� �� ����� ����ȭ �մϴ�.- 69 page
	Cat(const Cat&) = delete; // ��������ڸ� ���� �޶�.

	Cat() = default; // ����Ʈ �����ڸ� ����� �޶�.

	friend int main();
};

int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1; // ������ �ð� ������ ���� �غ���.
}





