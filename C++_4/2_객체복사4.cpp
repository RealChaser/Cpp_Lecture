// 2_객체복사 - 58 page
#include <iostream>
using namespace std;
// 58 page 그림.

//    C. 소유권 이전

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


	// 소유권 이전의 복사 생성자 - 아주 중요합니다

	Cat( Cat& c)   // const가 없습니다.
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





