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
	Cat() : age(0) 
	{
		name = new char;
		*name = 0;    // 널문자.
	}

	Cat(char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~Cat() { delete[] name; }


	Cat(const Cat& c)
	{
		cout << "복사 생성자" << endl;
		age = c.age;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
	
	//Cat(Cat&& c) 

	Cat(Cat&& c) noexcept   // 이 함수가 예외가 없음을 알려주는 c++11 키워드
	{
		cout << "Move 생성자" << endl;
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

	// move : 인자로 전달된 객체를 rvalue로 캐스팅.
	Cat c2 = move(c1); // 무조건 rvalue로 캐스팅..

	Cat c3 = move_if_noexcept(c2); // move 생성자에 예외가 없으면 rvalue로
								   // 그렇지 않으면 lvalue로 캐스팅

//	vector<Cat> v(10);
//	v.resize(20); // 메모리를 20으로 새로 만들고	
					// 기존 10개를 복사해 와야 한다.

}






