// 5_reference_wrapper2
// 5_reference_wrapper - 145 page
#include <iostream>
#include <functional>
using namespace std;

template<typename T> class xreference_wrapper
{
	T* obj;
public:
	xreference_wrapper(T& r) : obj(&r) {}
	operator T&() { return *obj; }
};

void goo(int& r) { r = 30; }

template<typename F, typename T> void Caller(F f,  T arg)
{
	f(arg);
}

// �Ͻ��� �߷��� ������ �Լ� ���ø��� ���� Ŭ���� ���ø��� �����ϰ� �Ѵ�.
// Ŭ���� ���ø��� �ٷ� ����ϴ� �� ���� ���� ����.
template<typename T> 
xreference_wrapper<T> xref(T& obj)
{
	return xreference_wrapper<T>(obj);
}




int main()
{
	int n = 10;

	//Caller(goo, n);
	//Caller(goo, &n); // T�� int*�� ����.

//	xreference_wrapper<int> r = n;
//	Caller(goo, r);

	// �ӽð�ü��� 
	// n�� int ���� �����Ϸ��� ������ Ŭ���� ���ø��� �Ͻ��� �߷��� 
	// �ȵǱ� ������ <int> �� �׻� �ʿ� �ϴ�.
	//Caller(goo, xreference_wrapper<int>(n));

	// helper �Լ� ���ø� ���
	Caller(goo, xref(n) ); // ���� ����..!


	cout << n << endl; 
}







