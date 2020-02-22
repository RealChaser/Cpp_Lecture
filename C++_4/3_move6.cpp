// 2_객체복사 - 58 page

//import vector; // C++17
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
Object foo() { Object o; return o; }


// T& : 인자로 lvalue 만 받겠다는 의도.
// T&&: 인자로 lvalue, rvalue를 모두 받겠다는 의도.

// 주의사항 : Object&&  => rvalue 이다.
//           T&& => rvalue라고 확신할수 없다.!

/*
template<typename T> T&& xmove(T&& arg)  // 
{
	return static_cast<T&&>(arg);
}
*/

// 핵심
// T&    : lvalue 이다.
// int&& : rvalue 이다.
// T&&   : lvalue 도 될수 있고 rvalue도 될수 있다.

// remove_reference<T>::type&&   : rvalue 이다.

template<typename T> typename remove_reference<T>::type&& xmove(T&& arg)
{
	return static_cast<typename remove_reference<T>::type &&>(arg);
}


int main()
{
	Object o1;
	Object o2 = o1; // 복사
	Object o3 = static_cast<Object&&>(o1); // Move

	Object o4 = move(o1); // Move
						// lvalue, T : int&, T&& : int&


	Object o5 = xmove(foo() ); // 리턴값 임시객체(rvalue)이므로 
							   // xmove()가 필요 없지만
							   // xmove()를 사용해도 문제가 없어야 한다.
}








