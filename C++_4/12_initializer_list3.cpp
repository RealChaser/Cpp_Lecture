// 12_initializer_list -  208
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;

template<typename T> void foo(T a) {}

int main()
{
//	foo({ 1,2,3 }); // error

	auto f = [](auto n) { return 0;};

	f({ 1,2,3 }); // ?

	// 각각 무슨 타입일까요 ? - 136 page
	auto a1 = 0;  // int
	auto a2(0);   // int
	auto a3{ 0 }; // initializer_list C++11 초창기
				  // C++17 부터 int로 하기로 결정. 
	auto a4 = { 0 };
//	auto a5{ 1,2,3 };// // initializer_list
	auto a5 = { 1,2,3 };

	cout << typeid(a1).name() << endl;
	cout << typeid(a2).name() << endl;
	cout << typeid(a3).name() << endl;
	cout << typeid(a4).name() << endl;
//	cout << typeid(a5).name() << endl;

//	cout << typeid( decltype({ 0 }).name() << endl;
//	cout << typeid(decltype({ 1,2 }).name() << endl;




}















