// 10_Ÿ�Ժ���
#include <iostream>
#include <type_traits>
using namespace std;


template<typename T> struct xremove_pointer
{
	typedef T type;
};
template<typename T> struct xremove_pointer<T*>
{
	//typedef T type;
	// ��͸� �� �˾ƾ� �մϴ�. - �ٽ�!!!
	typedef typename xremove_pointer<T>::type type;
};

int main()
{
	xremove_pointer<int***>::type n;  // T�� �ƴϹǷ� typename�� ����ϸ� �ȵ�.

	cout << typeid(n).name() << endl;
}




