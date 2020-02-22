// move만들기
#include <iostream>
#include <type_traits>
using namespace std;

class Test
{
	string data;
public:
	Test() { data = "hello"; }
	~Test() {}
	Test(const Test& t) : data(t.data) { cout << "copy" << endl; }
	Test& operator=(const Test& t) { data = t.data; cout << "copy=" << endl; return *this; }
	Test(Test&& t) noexcept : data(move(t.data)) { cout << "move" << endl; }
	Test& operator=(Test&& t) noexcept { data = move(t.data); cout << "move=" << endl; return *this; }
};

Test foo() 
{
	Test t; 
	return t; 
}

// C++ 표준 함수인 move를 만들어 봅시다.
// move : 인자로 전달된 객체를 rvalue(T&&)로 캐스팅하는 함수.
// lvalue , rvalue를 모두 받기위해 T&& 를 인자로 받는다.

template<typename T> typename remove_reference<T>::type&& xmove(T&& a)
{
	return static_cast<typename remove_reference<T>::type &&>(a);
}

int main()
{
	Test t;
	Test t1 = t;        // copy
	
	
	Test t2 = move(t); // move .. t 는 lvalue  T : int&
						//					T&& : int& && =>int&



	Test t3 = Test(); // 임시객체, rvalue, move()를 사용하지 않아도 move..

	Test t4 = xmove(Test()); // 되야 한다.
}




