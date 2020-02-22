// 10_chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
	// C++11 표준에 아래 처럼 되어 있습니다.
	/*
	using seconds = duration<int, ratio<1, 1>>; 
	using minutes = duration<int, ratio<60, 1>>;
	using milliseconds = duration<int, ratio<1, 1000>>;
	*/

	seconds s(3); // 3초
	nanoseconds ns = s;

	cout << ns.count() << endl;

	//minutes m = s; // error
	minutes m = duration_cast<minutes>(s); // ok..

	cout << m.count() << endl;

	//---------------------------------------------
	// 사용자 정의 literal 사용

//	seconds s1 = 3; // error.
	seconds s2(3);  // ok.  결국 duration의 생성자는 explicit 

	seconds s3 = 3s; // operator""s(3) 함수가 seconds객체 리턴.
					 // 결국, 복사 생성자 호출

	//seconds s4 = 1min;

	seconds s4 = 1min + 30s;

	cout << s4.count() << endl;


	seconds s5(35);

	cout << duration_cast<minutes>(s4).count() << endl;
	cout << floor<minutes>(s4).count() << endl;
	cout << ceil<minutes>(s4).count() << endl;
	cout << round<minutes>(s4).count() << endl;

}








