// 5_람다
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

// 람다와 변수 캡쳐 - 33 page

int g = 10;

int main()
{
	int v1 = 10;
	int v2 = 20;

	// 모든 지역변수 캡쳐.
	auto f1 = [=](int a) { return a + v1 + v2; };
	auto f2 = [&](int a) { return a + v1 + v2; };

	auto f3 = [v1](int a) { return a + v1; };
	auto f4 = [&v1](int a) { return a + v1; };

	auto f5 = [=, &v1](int a) { return a + v1 + v2; };
	auto f6 = [&, v1](int a) { return a + v1 + v2; };

	//auto f7 = [&, &v1](int a) { return a + v1 + v2; }; // error

	// 멤버 data이름 변경
	auto f7 = [x=v1](int a) { return a + x; }; //


}












