// 4_복사금지 - 

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


	// private 복사 생성자 : 복사를 막을때 사용하는 기술
//private:
//	Cat(const Cat& c);   // 핵심.. 선언만 한다.!

public:
//private:
	// C++11은 위 기법을 문법화 합니다.- 69 page
	Cat(const Cat&) = delete; // 복사생성자를 지워 달라.

	Cat() = default; // 디폴트 생성자를 만들어 달라.

	friend int main();
};

int main()
{
	Cat c1("nabi", 2);
	Cat c2 = c1; // 컴파일 시간 에러가 나게 해보자.
}





