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

/*	
	Cat(Cat& c) 
	{
		cout << "AA" << endl;
	} 
	*/
	// C++11 : 기존의 복사 생성자외에 Move 생성자라는 새로운 개념이 도입됩니다

	/*
	Cat(const Cat& c)
	{
		cout << "복사 생성자" << endl;
		age = c.age;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
	*/
	/*
	Cat(Cat&& c)  
	{
		cout << "Move 생성자" << endl;
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
	T tmp = a; // 복사 생성자 - 성능이 좋지 않다.
//	a = b;
//	b = tmp;
	*/

	T tmp = static_cast<T&&>(a);  // static_cast<Cat&&>(a)

//	T tmp = move(a); // 이 함수가 static_cast<T&&>() 하고 있습니다.
//	a = move(b);
//	b = move(tmp);
}

int main()
{
	Cat c1("nabi", 2);
	Cat c2("aaaa", 5);

	Swap(c1, c2);


	//Point& p = Point(); // error. 하지만 VC++ 언어 확장을 YES로 하면 허용
}





