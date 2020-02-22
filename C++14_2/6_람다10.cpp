#include <iostream>
using namespace std;


// default capture by reference

int main()
{
	int v1 = 10, v2 = 20;

//	auto f1 = [=](int a) { v1 = 100; v2 = 200;}; // error
	auto f2 = [=](int a) mutable { v1 = 100; v2 = 200; }; // ok, 복사본 변경

	// default capture by reference
	auto f3 = [&](int a) { v1 = 100; v2 = 200; }; // ok, 원본 변경

	f3(0);// v1 = 100, v2 =200

	cout << v1 << endl; // 100
}


/*
class ClosureType
{
	int& v1;
	int& v2;
public:
	ClosureType(int& a, int& b) : v1(a), v2(b) {}

	inline bool operator()(int a) const
	{
		v1 = 100;	// ok
		return a + v1 + v2;
	}
};

auto f3 = ClosureType(v1, v2);
*/






