// 2_const5- 6page
#include <iostream>
using namespace std;

// 상수함수의 필요성 - C++98 이야기

class Point
{
public:
	int x = 0, y = 0; // C++11부터 가능. field initialize
	
	void set(int a, int b) { x = a; y = b; }


	void print()  const // 상수 함수..
	{
		//x = 10; // error. 상수함수에서는 멤버의 값을 변경 못함.
		cout << x << ", " << y << endl;
	}
};

int main()
{
	const Point p;
	p.x = 10;     // error.
	p.set(10, 20);// error
	p.print();		// 상수 객체이면 멤버함수 print()를 호출할수 없다.
					// 선언만 가지고는 멤버가 수정되는지 알수 없다.
				// print()를 사용하게 하려면 반드시 상수 함수이어야 한다.

	// "상수 객체는 상수 함수만 호출할수 있다."  - 6 page아래 부분.
}




