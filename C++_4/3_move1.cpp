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

/*	
	Cat(Cat& c) 
	{
		cout << "AA" << endl;
	} 
	*/
	// C++11 : ������ ���� �����ڿܿ� Move �����ڶ�� ���ο� ������ ���Ե˴ϴ�

	/*
	Cat(const Cat& c)
	{
		cout << "���� ������" << endl;
		age = c.age;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
	*/
	/*
	Cat(Cat&& c)  
	{
		cout << "Move ������" << endl;
		name = c.name;
		age = c.age;
		c.name = 0;
		c.age = 0;
	}
	*/
};

template<typename T> void Swap(T& a, T& b)
{
	/*
	T tmp = a; // ���� ������ - ������ ���� �ʴ�.
//	a = b;
//	b = tmp;
	*/

	T tmp = static_cast<T&&>(a);  // static_cast<Cat&&>(a)

//	T tmp = move(a); // �� �Լ��� static_cast<T&&>() �ϰ� �ֽ��ϴ�.
//	a = move(b);
//	b = move(tmp);
}

int main()
{
	Cat c1("nabi", 2);
	Cat c2("aaaa", 5);

	Swap(c1, c2);


	//Point& p = Point(); // error. ������ VC++ ��� Ȯ���� YES�� �ϸ� ���
}





