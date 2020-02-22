// 10_chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
	// ration : 분수 표현(단위, milli : 1/1000)

	// duration : 단위와 값을 보관하는 템플릿

	duration<int, ratio<1, 1>>    d1(1); // 1/1 이 1개
	duration<int, ratio<1, 1000>> d2(1); // 1/1000 이 1개
	duration<int, ratio<1, 1000>> d3( d1 ); // 

	cout << d3.count() << endl; // 1000
	
	//--------------------------------------
	// 국제 표준 단위
	/*
	using kilo  = ratio<1000, 1>;
	using centi = ratio<1, 100>;
	using milli = ratio<1, 1000>;
	*/

	duration<int, kilo> d4(1);
	duration<int, centi> d5(d4);

	cout << d5.count() << endl;

	//------------------------
	// duration 이름변경
	using Meter      = duration<int, ratio<1, 1>>;
	using CentiMeter = duration<int, centi>;
	using KiloMeter  = duration<int, kilo>;

	Meter      m(1300);

	CentiMeter cm = m; // data 손실이 없다. 암시적 변환 ok.
	//KiloMeter  km = m; // error. data 손실이 있다.

	KiloMeter  km = duration_cast<KiloMeter>(m); // ok..

	cout << cm.count() << endl;

	cout << km.count() << endl;
}






