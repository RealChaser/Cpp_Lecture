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
	Object() {}
	~Object() {}

	// 복사 계열 함수
	Object(const Object& obj)
		: data(obj.data), str(obj.str) {
		cout << "복사 생성자" << endl;
	}

	Object& operator=(const Object& obj)
	{
		data = obj.data;
		str = obj.str;
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
		str = move(obj.str);
		cout << "Move 대입연산자" << endl;
		return *this;
	}
};
//-----------------------------------


class Test
{
	Object data;
public:
	Test() {}
	
	// 전통적인 setter method 모양
	// C++98 : 인자는 const &가 좋다.!
	/*
	void setData(const Object& v)
	{
		//data = v; // 무조건 복사이다.
		data = move(v); // 사용자의도와 상관없이 항상 move이다
	}
	*/
	// 사용자에게 인자를 복사, Move로 모두 사용하게 하려면 
	// setter는 2개가 필요 하다.
	//void setData(const Object& v) { data = v; }
	//void setData(Object&& v)      { data = move(v); }

	// 위처럼 하면 모든 setter 함수는 2개 이어야 한다
	// call by value를 고려해 보자
	void setData(Object v) { data = move(v); }
};



int main()
{
	Test t;

	Object o;
//	t.setData(o);		// 복사로 전달하고 싶다는 의도.
//	t.setData(move(o)); // 이동으로 전달하고 싶다는 의도.
						// 함수 호출되 o는 더이상필요 없다는 것.

	t.setData(o);		// 복사 대입 1회,  복사 1회 & Move 1회
	t.setData(move(o)); // Move 대입 1회,  Move 2회


}








