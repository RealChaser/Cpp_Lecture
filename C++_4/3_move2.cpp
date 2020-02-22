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
	Cat() : age(0) 
	{
		name = new char;
		*name = 0;    // �ι���.
	}

	Cat(char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~Cat() { delete[] name; }


	Cat(const Cat& c)
	{
		cout << "���� ������" << endl;
		age = c.age;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
	
	//Cat(Cat&& c) 

	Cat(Cat&& c) noexcept   // �� �Լ��� ���ܰ� ������ �˷��ִ� c++11 Ű����
	{
		cout << "Move ������" << endl;
		name = c.name;
		age = c.age;
		c.name = 0;
		c.age = 0;

		//new(nothrow) int(1000)
	}
};

#include <vector>


int main()
{
	Cat c1("AA", 2);

	// move : ���ڷ� ���޵� ��ü�� rvalue�� ĳ����.
	Cat c2 = move(c1); // ������ rvalue�� ĳ����..

	Cat c3 = move_if_noexcept(c2); // move �����ڿ� ���ܰ� ������ rvalue��
								   // �׷��� ������ lvalue�� ĳ����

//	vector<Cat> v(10);
//	v.resize(20); // �޸𸮸� 20���� ���� �����	
					// ���� 10���� ������ �;� �Ѵ�.

}






