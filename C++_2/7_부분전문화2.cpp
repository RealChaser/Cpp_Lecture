// 7_�κ�����ȭ2
#include <iostream>
using namespace std;


template<typename T, typename U> class Test
{
public:
	void foo() { cout << "T,U" << endl; }
};

template<typename T, typename U> class Test<T*, U>
{
public:
	void foo() { cout << "T*,U" << endl; }
};

// �ٽ� : primary template�� ���ڰ� 2�� ��..
//       �κ�����ȭ �Ҷ��� ���ڰ� �ٰų� �þ���� �ִ�.
//       ������ Test<T,T> ó�� ���� �ڵ�� �ݵ�� 2���̾�� �Ѵ�.
template<typename T> class Test<T, T>
{
public:
	void foo() { cout << "T, T" << endl; }
};

template<typename T> class Test<short, T>
{
public:
	void foo() { cout << "short, T" << endl; }
};

template<> class Test<char, int>
{
public:
	void foo() { cout << "char, int" << endl; }
};


int main()
{
	Test<int,    double> t1; t1.foo(); // T,  U
	Test<int*,   double> t2; t2.foo(); // T*, U ������ �غ�����
	Test<double, double> t3; t3.foo(); // T,  T   => �ٽ�..
	Test<short,  double> t4; t4.foo(); // short, U
	Test<char,   int>    t5; t5.foo(); // char,  int 
}




