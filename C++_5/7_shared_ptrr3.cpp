#include <iostream>
#include <string>
#include <memory>
using namespace std;

class People
{
	string name;
public:
	People(string n) : name(n) {}

	~People() { cout << name << " ÆÄ±«µÊ" << endl; }

	
	shared_ptr<People> bestFriend;
};

int main()
{
	shared_ptr<People> p1(new People("AAA"));
	shared_ptr<People> p2(new People("BBB"));

	// »óÈ£ ÂüÁ¶.
	p1->bestFriend = p2;
	p2->bestFriend = p1;
}










