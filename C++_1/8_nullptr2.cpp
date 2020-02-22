#include <iostream>
using namespace std;

int main()
{
	int* p1 = nullptr; // 포인터 0을 나타내는 것.
	//int n = nullptr; // error
	bool b = nullptr; // ??? ok.. bool로 암시적 변환 가능.

	// 키워드를 제외한 모든 요소는 타입이 있다.
	cout << typeid(nullptr).name() << endl;

	nullptr_t a = nullptr;

	int* p2 = a; // nullptr_t는 모든 타입의 포인터와 bool로 암시적 변환된다.
}









