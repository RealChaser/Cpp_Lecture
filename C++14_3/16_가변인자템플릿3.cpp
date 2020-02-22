#include <iostream>
using namespace std;

// ���� ���� ������ ���..

// �ٽ� . 1��° ���ڴ� �ݵ�� ������ ������ �޾ƾ� �Ѵ�.
template<typename T, typename ... Types> 
void foo(T value, Types ... args)
{
	static int n = 0;
	++n;

	cout << n << endl;

	cout << typeid(T).name() << " : " << value << endl;

	foo(args...); // value : 3.4  args : 4
				  // value : 4    args :
}
void foo() {} // ��͸� �����ϱ� ����..
				// ��Ȯ���� ��� ȣ���� �ƴ�..

int main()
{
	foo(1, 3.4, 4);   // value : 1
					  // args : 3.4, 4
}









