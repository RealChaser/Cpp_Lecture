// 3_람다표현식7 - 중요! - 34page

#include <iostream>
using namespace std;

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	//auto f1 = [](int a) { return a + g; };// 전역변수 사용 - ok
	//auto f2 = [](int a) { return a + v1 + v2; };// 지역변수 사용 error

	// 지역변수 캡쳐 문법
	//auto f3 = [=](int a) { return a + v1 + v2; };// ok	

	//auto f4 = [=](int a) { v1 = 100; return a + v1 + v2; }; // 값 변경 - error

	// mutable 람다 : ()연산자가 const함수가 아니다
	auto f4 = [=](int a) mutable { v1 = 100; return a + v1 + v2; };

	f4(1); // 이순간 v1 = 100 은 복사본의 변경
	cout << v1 << endl;
	
	// 지역변수 캡쳐시 컴파일러가 생성한 코드
	class Lambda
	{
		int v1;
		int v2; // 지역변수값을 보관하기 위해
	public:
		Lambda(int a, int b) : v1(a), v2(b) {}

		int operator()(int a) 
		{
			v1 = 100; 
			return a + v1 + v2;
		}
	};
	auto f4 = Lambda(v1, v2); // 생성자로 지역변수 전달	
}








