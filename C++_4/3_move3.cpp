// 2_객체복사 - 58 page
#include <iostream>
#include <string>
using namespace std;

// 복사 생성자에서는 복사를 Move생성자에서는 이동을 해야 한다.

class Object
{
	int    data;
	string str;
public:
	Object()  {}
	~Object() {}

	// 복사 계열 함수
	Object(const Object& obj) 
		: data(obj.data), str(obj.str) { cout << "복사 생성자" << endl; }

	Object& operator=(const Object& obj) 
	{
		data = obj.data;
		str  = obj.str;
		cout << "복사 대입연산자" << endl;
		return *this; 
	}

	// Move 계열 함수
	Object(Object&& obj) noexcept
		: data(move(obj.data)), str(move(obj.str)) 
	{
		cout << "Move 생성자" << endl;
	}

	Object& operator=(Object&& obj) noexcept
	{
		data = move(obj.data);
		str  = move(obj.str);
		cout << "Move 대입연산자" << endl;
		return *this;
	}
};


int main()
{

}






