// 18_사용자정의상수 - 225
#include <iostream>
#include <string>
#include <complex>
using namespace std;

class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};
// user define literal - table 
Meter operator""_m( unsigned long long v)
{
	return Meter(v);
}

int main()
{
	float f = 3.4f;

	Meter me = 3_m; // operator""m(3)

	//Gram gr = 10g;

}





