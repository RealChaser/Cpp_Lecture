// 34page

#include <iostream>
using namespace std;

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	// capture by value
	//auto f1 = [=](int a) { return a + v1; }; // 수정 불가
	//auto f1 = [=](int a) mutable { return a + v1; }; // 수정 가능
													// 복사본

	// capture variable by reference
	auto f1 = [&](int a) { v1 = 100;  return a + v1; }; //  원본 수정

	f1(0);
	cout << v1 << endl; // 100

	// 지역변수 캡쳐시 컴파일러가 생성한 코드
	class Lambda
	{
		int& v1;
		int& v2;
	public:
		Lambda(int& a, int& b) : v1(a), v2(b) {}

		int operator()(int a) const
		{
			v1 = 100;
			return a + v1 + v2;
		}
	};
	auto f4 = Lambda(v1, v2); // 생성자로 지역변수 전달

}








