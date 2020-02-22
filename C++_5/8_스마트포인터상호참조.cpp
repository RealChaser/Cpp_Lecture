// 8_����Ʈ�����ͻ�ȣ����

#include <iostream>
#include <string>
#include <memory>
using namespace std;

class People
{
	string name;
public:
	People(string n) : name(n) {}

	~People() { cout << name << " �ı���" << endl; }

	// ��ȣ ������ ���輺�� ������ ��������� �����Ǵ� ����Ʈ�����͸� 
	// ����ϸ� �ȵȴ�.
	//shared_ptr<People> bestFriend;

	People* bestFriend; // ��¥ ������ �̹Ƿ� ��������� �������� �ʴ´�.
						// ������ ����Ű�� ���� �ı��Ǿ����� �����Ҽ� ����.

	void print_friend_name()
	{
		cout << bestFriend->name << endl;
	}
};

int main()
{
	shared_ptr<People> p1(new People("AAA"));
	
	{
		shared_ptr<People> p2(new People("BBB"));

		// ��ȣ ����.
		p1->bestFriend = p2.get(); // p2�� ���� ��ü�� �����͸� ���� �Լ�
		p2->bestFriend = p1.get();
	}

	p1->print_friend_name();
}










