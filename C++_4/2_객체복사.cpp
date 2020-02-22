// 2_객체복사 - 58 page
#include <iostream>
using namespace std;
// 58 page 그림.

// 1. 클래스 안에 포인터 멤버가 있으면 디폴트 복사 생성자는 얕은 복사 현상이 있다

// 2. 사용자가 복사 생성자를 만들어서 해결해야 한다.

//    A. 깊은 복사
//    B. 참조 계수
//    C. 소유권 이전
//    D. 복사 금지.

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





