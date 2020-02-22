// 2_객체복사 - 58 page
#include <iostream>
using namespace std;
// 60 page 그림.

//    A. 깊은 복사

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


	// 깊은 복사로 구현한 복사 생성자
	Cat(const Cat& c)
	{
		// 1. 포인터가 아닌 멤버는 그냥 복사
		age = c.age;
		
		// 2. 포인터 멤버는 메모리를 복사
		name = new char[strlen(c.name) + 1];

		strcpy(name, c.name);
	}
};




int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1; 
}





