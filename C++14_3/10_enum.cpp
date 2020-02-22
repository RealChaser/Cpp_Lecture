#include <iostream>
using namespace std;

// 기존의 enum : unscoped enum
enum Color { red = 1, green = 2, blue = 3 };


// scoped enum
enum class Color { red = 1, green = 2, blue = 3 };
enum class Color : char { red = 1, green = 2, blue = 3 };
int main()
{
	//int n = red; // Color::red 

	int n = Color::red;

	int red = 30;
	
	cout << red << endl; // 지역변수
}