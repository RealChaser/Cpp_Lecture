//1_nullptr2

#include <iostream>
using namespace std;

// C++11 nullptr : 포인터 0

int main()
{
	int* p = nullptr; // ok
	//int  n = nullptr; // error

	cout << typeid(nullptr).name() << endl;

	// nullptr은 nullptr_t 타입입니다.
	nullptr_t a = nullptr;
	

}

