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

// Rule Of 3 : �ڿ��Ҵ��� �ִٸ� �Ҹ���, ���� ������, ���Կ����� �� �ʿ� �ϴ�
// Rule Of 5 : Rule Of 3 + Move �Լ� 2��.

// ��Ģ 1. 5�� �Լ��� ��� ������ ������.. 5�� �Լ��� ��� ����Ʈ�� ������ �ش�

// ��Ģ 2. C++98���� ��������ڸ� �����ϰ� ������ ������ ������ ����Ʈ�� ����.
//         ������ Move �迭 �Լ��� �������� �ʴ´�.
//		   ����迭�� ����ؼ� Move �ϰ� �ȴ�.

// ��Ģ 3. Move �迭�� �����ϸ� ���� �迭�� �������� �ʴ´�.(�����ȴ�.)
class Test
{
	Object data;
public:
	Test() {}

	//Test(const Test& t) :data(t.data)  {} // ���� ������ ����.
	Test(Test&& t) :data(move(t.data)) {} // Move ������ ����.
};

int main()
{
	Test t1;
	Test t2 = t1;
	Test t3 = move(t1);

	t3 = t2;
	t3 = move(t2);
}






