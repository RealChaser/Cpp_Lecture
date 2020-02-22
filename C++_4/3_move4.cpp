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

// Rule Of 3 : 자원할당이 있다면 소멸자, 복사 생성자, 대입연산자 가 필요 하다
// Rule Of 5 : Rule Of 3 + Move 함수 2개.

// 규칙 1. 5개 함수를 모두 만들지 않으면.. 5개 함수를 모두 디폴트로 제공해 준다

// 규칙 2. C++98에서 복사생성자를 제공하고 대입이 없으면 대입은 디폴트로 제공.
//         하지만 Move 계열 함수는 제공하지 않는다.
//		   복사계열을 사용해서 Move 하게 된다.

// 규칙 3. Move 계열만 제공하면 복사 계열은 제공되지 않는다.(삭제된다.)
class Test
{
	Object data;
public:
	Test() {}

	//Test(const Test& t) :data(t.data)  {} // 복사 생성자 제공.
	Test(Test&& t) :data(move(t.data)) {} // Move 생성자 제공.
};

int main()
{
	Test t1;
	Test t2 = t1;
	Test t3 = move(t1);

	t3 = t2;
	t3 = move(t2);
}






