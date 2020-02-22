// 8_스마트포인터상호참조

#include <iostream>
#include <string>
#include <memory>
using namespace std;

class People
{
	string name;
public:
	People(string n) : name(n) {}

	~People() { cout << name << " 파괴됨" << endl; }

	weak_ptr<People> bestFriend;

	void print_friend_name()
	{
		shared_ptr<People> sp = bestFriend.lock();

		if (sp) cout << sp->name << endl;
		else	cout << "친구 파괴됨.." << endl;
	}
};
int main()
{
	shared_ptr<People> p1(new People("AAA"));
	{
		shared_ptr<People> p2(new People("BBB"));
		// 상호 참조.
		p1->bestFriend = p2;
		p2->bestFriend = p1;
	}

	p1->print_friend_name();
}










