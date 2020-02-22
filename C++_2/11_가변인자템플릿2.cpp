// 11_�����������ø� - 108 page
#include <iostream>
using namespace std;

void goo(int a, const char* s, double d)
{
	cout << "goo" << endl;
}
void hoo(int* a, const char** s, double* d)
{
	cout << "hoo" << endl;
}
// �������� �Լ� ���ø�

template<typename ... Types> void foo(Types ... args)
{
	// args : parameter pack
	cout << sizeof...(args) << endl;
	cout << sizeof...(Types) << endl;

	// parameter pack�� �ٸ� �Լ��� �����ϱ� - pack�� Ǯ���� ������ �մϴ�.
	goo(args...); // pack expansion
	hoo(&args...); 
//	koo(++args...);
};


int main()
{
	foo(1, "ddd", 2.3); // 
}
