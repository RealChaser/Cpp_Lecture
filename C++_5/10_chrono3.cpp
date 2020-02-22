// 10_chrono
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
	// ration : �м� ǥ��(����, milli : 1/1000)

	// duration : ������ ���� �����ϴ� ���ø�

	duration<int, ratio<1, 1>>    d1(1); // 1/1 �� 1��
	duration<int, ratio<1, 1000>> d2(1); // 1/1000 �� 1��
	duration<int, ratio<1, 1000>> d3( d1 ); // 

	cout << d3.count() << endl; // 1000
	
	//--------------------------------------
	// ���� ǥ�� ����
	/*
	using kilo  = ratio<1000, 1>;
	using centi = ratio<1, 100>;
	using milli = ratio<1, 1000>;
	*/

	duration<int, kilo> d4(1);
	duration<int, centi> d5(d4);

	cout << d5.count() << endl;

	//------------------------
	// duration �̸�����
	using Meter      = duration<int, ratio<1, 1>>;
	using CentiMeter = duration<int, centi>;
	using KiloMeter  = duration<int, kilo>;

	Meter      m(1300);

	CentiMeter cm = m; // data �ս��� ����. �Ͻ��� ��ȯ ok.
	//KiloMeter  km = m; // error. data �ս��� �ִ�.

	KiloMeter  km = duration_cast<KiloMeter>(m); // ok..

	cout << cm.count() << endl;

	cout << km.count() << endl;
}






