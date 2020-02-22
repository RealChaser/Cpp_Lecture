// move�����
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

// C++ ǥ�� �Լ��� move�� ����� ���ô�.
// move : ���ڷ� ���޵� ��ü�� rvalue(T&&)�� ĳ�����ϴ� �Լ�.
// lvalue , rvalue�� ��� �ޱ����� T&& �� ���ڷ� �޴´�.

template<typename T> typename remove_reference<T>::type&& xmove(T&& a)
{
	return static_cast<typename remove_reference<T>::type &&>(a);
}

int main()
{
	Test t;
	Test t1 = t;        // copy
	
	
	Test t2 = move(t); // move .. t �� lvalue  T : int&
						//					T&& : int& && =>int&



	Test t3 = Test(); // �ӽð�ü, rvalue, move()�� ������� �ʾƵ� move..

	Test t4 = xmove(Test()); // �Ǿ� �Ѵ�.
}




