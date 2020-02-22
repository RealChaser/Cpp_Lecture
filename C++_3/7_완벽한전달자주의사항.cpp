// 7_�Ϻ������������ǻ���
#include <iostream>
using namespace std;

template<typename F, typename ... Types>
void logTime(F f, Types&& ... args)
{
	f(forward<Types>(args)...);
}
//-----------------------------------------------
void foo(int* p) {}

int    square(int a)    { return a * a; }
double square(double a) { return a * a; }

template<typename T> void goo(T a) {}

int main()
{
	//logTime(foo, 0);
	logTime(foo, nullptr);

	square(3); // ok..
	//logTime(square, 3); // error

	// �Լ�Ÿ���� �� ĳ������ �ȵ˴ϴ�. - ���� 7���ö�...
	//logTime( (int(&)(int))square, 3); // �Ǵ� �Լ������ͷ� ĳ����

	logTime(static_cast<int(&)(int)>(square), 3);


	goo(3);//ok.

	//logTime(goo, 3); // error
	logTime(goo<int>, 3); // ok..
}












