// 7_부분전문화2
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

// 핵심 : primary template의 인자가 2개 라도..
//       부분전문화 할때는 인자가 줄거나 늘어날수도 있다.
//       하지만 Test<T,T> 처럼 우측 코드는 반드시 2개이어야 한다.
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
	Test<int*,   double> t2; t2.foo(); // T*, U 나오게 해보세요
	Test<double, double> t3; t3.foo(); // T,  T   => 핵심..
	Test<short,  double> t4; t4.foo(); // short, U
	Test<char,   int>    t5; t5.foo(); // char,  int 
}




