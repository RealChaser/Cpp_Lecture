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

	// ���� ���� Ÿ���ϱ�� ? - 136 page
	auto a1 = 0;  // int
	auto a2(0);   // int
	auto a3{ 0 }; // initializer_list C++11 ��â��
				  // C++17 ���� int�� �ϱ�� ����. 
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















