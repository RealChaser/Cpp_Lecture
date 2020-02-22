// 2_��ü���� - 58 page
#include <iostream>
#include <string>
using namespace std;

// ���� �����ڿ����� ���縦 Move�����ڿ����� �̵��� �ؾ� �Ѵ�.

class Object
{
	int    data;
	string str;
public:
	Object()  {}
	~Object() {}

	// ���� �迭 �Լ�
	Object(const Object& obj) 
		: data(obj.data), str(obj.str) { cout << "���� ������" << endl; }

	Object& operator=(const Object& obj) 
	{
		data = obj.data;
		str  = obj.str;
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
		str  = move(obj.str);
		cout << "Move ���Կ�����" << endl;
		return *this;
	}
};


int main()
{

}






