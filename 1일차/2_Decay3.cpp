#include <iostream>
using namespace std;

template<typename T> void foo(T  a) // 1. T int[3] : int a[3] �� �Ǹ� ������ �ɼ� ����.
{									// 2. int* �� ����.
	cout << typeid(T).name() << endl; // int*
}
template<typename T> void goo(T& a) // int (&a)[3]	������ �����ϱ� ������ Ÿ�� �״�� ����� 
{
	cout << typeid(T).name() << endl; // int[3]
} 

int main()
{
	int x[3] = { 0 };
	
	//������ ������.. �����Ϸ� ���忡�� �ִ��� T�� ��Ȯ�ϰ� �����ؾ� �մϴ�
	foo(x); 
	goo(x);


}







