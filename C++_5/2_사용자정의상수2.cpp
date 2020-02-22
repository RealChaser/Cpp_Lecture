// 2_사용자정의상수
#include <string>
#include <complex>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void foo(const char* s) { cout << "char*" << endl; }   // 1
void foo(string      s) { cout << "string" << endl; }  // 2

int main()
{
	foo("hello"); // 1
	foo("hello"s); // 2

	//complex<int> c(3, 2); // 3 + 2i
	//complex<int> c(3); // 3 + 0i
	complex<int> c(3i); // 0 + 3i
	cout << c << endl;

	//nanoseconds ns = 3ns;
	//nanoseconds ns = 3us;
	//nanoseconds ns = 3ms;

	nanoseconds ns = 3min;

	cout << ns.count() << endl;
	
}









