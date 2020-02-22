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


	// C++11 : 기존의 복사 생성자외에 Move 생성자라는 새로운 개념이 도입됩니다

	// 복사 생성자 : 깊은 복사 또는 참조계수로 구현합니다
	Cat(const Cat& c)
	{
		cout << "복사 생성자" << endl;

		age = c.age;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}

	// Move 생성자 : 소유권 이전의 기법으로 구현합니다.
	//Cat(Cat& c)   // 이렇게 하면 Cat c2 = c1 의 코드가 복사가아닌 Move호출
	Cat(Cat&& c)  // 그래서 이렇게 만들기로 했다!!
	{
		cout << "Move 생성자" << endl;
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
	Cat c2 = c1;  // Cat c2(c1), 복사 생성자가 호출되어야 한다.

	Cat c3 = static_cast<Cat&&>(c1); //move 생성자 호출

	Cat c4 = foo(); // 복사가 효율적일까요 ? Move가 효율적일까요
					// 복사 될 필요 없다. move가 좋다.!

					// foo()는 임시객체를 리턴하므로 
					// rvalue 이다. 자동으로 Move생성자 호출.
}





