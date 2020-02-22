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


class Test
{
	Object data;
public:
	Test() {}
	
	// �������� setter method ���
	// C++98 : ���ڴ� const &�� ����.!
	/*
	void setData(const Object& v)
	{
		//data = v; // ������ �����̴�.
		data = move(v); // ������ǵ��� ������� �׻� move�̴�
	}
	*/
	// ����ڿ��� ���ڸ� ����, Move�� ��� ����ϰ� �Ϸ��� 
	// setter�� 2���� �ʿ� �ϴ�.
	//void setData(const Object& v) { data = v; }
	//void setData(Object&& v)      { data = move(v); }

	// ��ó�� �ϸ� ��� setter �Լ��� 2�� �̾�� �Ѵ�
	// call by value�� ����� ����
	void setData(Object v) { data = move(v); }
};



int main()
{
	Test t;

	Object o;
//	t.setData(o);		// ����� �����ϰ� �ʹٴ� �ǵ�.
//	t.setData(move(o)); // �̵����� �����ϰ� �ʹٴ� �ǵ�.
						// �Լ� ȣ��� o�� ���̻��ʿ� ���ٴ� ��.

	t.setData(o);		// ���� ���� 1ȸ,  ���� 1ȸ & Move 1ȸ
	t.setData(move(o)); // Move ���� 1ȸ,  Move 2ȸ


}








