//1_nullptr2

#include <iostream>
using namespace std;

// C++11 nullptr : ������ 0

int main()
{
	int* p = nullptr; // ok
	//int  n = nullptr; // error

	cout << typeid(nullptr).name() << endl;

	// nullptr�� nullptr_t Ÿ���Դϴ�.
	nullptr_t a = nullptr;
	

}

