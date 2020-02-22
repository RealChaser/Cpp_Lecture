// 2_객체복사 - 58 page
#include <iostream>
using namespace std;
// 58 page 그림.
//    B. 참조 계수 - 61 page 그림

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

		ret = new int(1); // 한개를 1로 초기화
	}

	// 참조계수를 사용한 복사 생성자
	Cat(const Cat& c)
	{
		// 1. 모든 멤버를 얕은 복사 후에
		name = c.name;
		age = c.age;
		ref = c.ref;

		// 2. 참조계수 증가
		++(*ref);
	}

	// 참조계수용 소멸자
	~Cat() 
	{
		if (--(*ref) == 0)
		{
			delete[] name;  // 자원
			delete ref;     // 관리객체(참조계수) 제거.
		}
	}
};



int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1; 
}





