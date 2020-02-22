// 8_Ÿ���߷�2
#include <iostream>
using namespace std;

// ��Ģ 2. ���ø� ���ڰ� ���� Ÿ���϶� - 130 page
//         T�� �����Ҷ� �Լ����ڷ� ���޵Ǵ� ��ü�� ���� �Ӽ��� �����Ѵ�.
//         const�� volatile �Ӽ��� ���� �ȴ�.
template<typename T> void foo(T& param)
{
	cout << "T     : " << typeid(T).name()     << "   ";
	cout << "param : " << typeid(param).name() << endl;
}

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // T: int   param : int&
	foo(r); // T�� int&  param : int& & => int&  ���ƴ϶� �Ʒ�ó���ȴ�.
			// T: int   param : int& 

	foo(c); // T: const int   param : const int&

	foo(cr);// T: const int   param : const int&
}