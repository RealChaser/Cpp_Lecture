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

	weak_ptr<People> bestFriend;

	void print_friend_name()
	{
		shared_ptr<People> sp = bestFriend.lock();

		if (sp) cout << sp->name << endl;
		else	cout << "ģ�� �ı���.." << endl;
	}
};
int main()
{
	shared_ptr<People> p1(new People("AAA"));
	{
		shared_ptr<People> p2(new People("BBB"));
		// ��ȣ ����.
		p1->bestFriend = p2;
		p2->bestFriend = p1;
	}

	p1->print_friend_name();
}










