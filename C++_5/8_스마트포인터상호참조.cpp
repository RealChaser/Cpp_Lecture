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

	// 상호 참조의 위험성이 있으면 참조계수가 증가되는 스마트포인터를 
	// 사용하며 안된다.
	//shared_ptr<People> bestFriend;

	People* bestFriend; // 진짜 포인터 이므로 참조계수가 증가하지 않는다.
						// 하지만 가르키던 곳이 파괴되었는지 조사할수 없다.

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

		// 상호 참조.
		p1->bestFriend = p2.get(); // p2가 가진 객체의 포인터를 얻어내는 함수
		p2->bestFriend = p1.get();
	}

	p1->print_friend_name();
}










