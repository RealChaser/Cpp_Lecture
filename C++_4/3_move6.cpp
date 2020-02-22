// 2_��ü���� - 58 page

//import vector; // C++17
#include <iostream>
#include <string>
using namespace std;

// ���� �����ڿ����� ���縦 Move�����ڿ����� �̵��� �ؾ� �Ѵ�.

class Object
{
	int    data;
	string str;
public:
	Object() {}
	~Object() {}

	// ���� �迭 �Լ�
	Object(const Object& obj)
		: data(obj.data), str(obj.str) {
		cout << "���� ������" << endl;
	}

	Object& operator=(const Object& obj)
	{
		data = obj.data;
		str = obj.str;
		cout << "���� ���Կ�����" << endl;
		return *this;
	}

	// Move �迭 �Լ�
	Object(Object&& obj) noexcept
		: data(move(obj.data)), str(move(obj.str))
	{
		cout << "Move ������" << endl;
	}

	Object& operator=(Object&& obj) noexcept
	{
		data = move(obj.data);
		str = move(obj.str);
		cout << "Move ���Կ�����" << endl;
		return *this;
	}
};
//-----------------------------------
Object foo() { Object o; return o; }


// T& : ���ڷ� lvalue �� �ްڴٴ� �ǵ�.
// T&&: ���ڷ� lvalue, rvalue�� ��� �ްڴٴ� �ǵ�.

// ���ǻ��� : Object&&  => rvalue �̴�.
//           T&& => rvalue��� Ȯ���Ҽ� ����.!

/*
template<typename T> T&& xmove(T&& arg)  // 
{
	return static_cast<T&&>(arg);
}
*/

// �ٽ�
// T&    : lvalue �̴�.
// int&& : rvalue �̴�.
// T&&   : lvalue �� �ɼ� �ְ� rvalue�� �ɼ� �ִ�.

// remove_reference<T>::type&&   : rvalue �̴�.

template<typename T> typename remove_reference<T>::type&& xmove(T&& arg)
{
	return static_cast<typename remove_reference<T>::type &&>(arg);
}


int main()
{
	Object o1;
	Object o2 = o1; // ����
	Object o3 = static_cast<Object&&>(o1); // Move

	Object o4 = move(o1); // Move
						// lvalue, T : int&, T&& : int&


	Object o5 = xmove(foo() ); // ���ϰ� �ӽð�ü(rvalue)�̹Ƿ� 
							   // xmove()�� �ʿ� ������
							   // xmove()�� ����ص� ������ ����� �Ѵ�.
}








