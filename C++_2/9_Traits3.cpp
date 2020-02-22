// 9_Traits3
#include <iostream>
#include <type_traits> // C++ 11 ǥ�� Traits ��Ÿ �Լ���.. 100���� �ֽ��ϴ�
using namespace std;




int a;    // a�� Ÿ�� int

int* p;   // int*

int x[10];// �����̸� : x  Ÿ�� : int [10]   => T[N]



template<typename T> struct IsArray
{
	static constexpr int  size = -1;
	static constexpr bool value = false; 
};

template<typename T, int N> struct IsArray< T[N] >
{
	static constexpr int  size = N;
	static constexpr bool value = true;
};

template<typename T> void foo(const T& a)
{
	if (IsArray<T>::value)
		//cout << "�迭�Դϴ�. ũ��� " << IsArray<T>::size << endl;
		cout << extent<T, 0>::value << endl; // C++11 ǥ��
	else
		cout << "�迭�� �ƴմϴ�." << endl;
}
int main()
{
	int x[5] = { 0 };

	foo(x); // IsArray ����� ������.. IsPointer<> �����ϼ���.
}




