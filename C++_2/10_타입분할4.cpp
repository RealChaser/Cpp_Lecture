// 10_Ÿ�Ժ���
#include <iostream>
#include <type_traits>
using namespace std;

// ��Ʈ : �Ʒ� �Լ��� Ÿ���� �Լ� �̸��� ������ ����Դϴ�.
//       int (int,int)
int goo(int a, int b) { return 0; }


template<typename T> struct ReturnType
{
	typedef T type;
};




// ���� Ÿ���� ������ �ֵ��� Ÿ�� ����
template<typename R, typename A1, typename A2> 
struct ReturnType<R(A1, A2)>
{
	typedef R type;
};






template<typename T> void foo(const T& a)
{
	typename ReturnType<T>::type n; // �Լ� ���ڰ� 2�� ��� ���� �ϰ� �غ�����

	cout << typeid(n).name() << endl; // int ������ �غ�����.

//	n = a(0, 0); // goo(0,0)
}

int main()
{
	foo(goo);
}




