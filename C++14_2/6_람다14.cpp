#include <iostream>
using namespace std;

// capture �� ��ȯ

// ���������� ĸ������ ���� ���ٸ� �Լ� ������ ��ȯ ���.
int main()
{
	int v1 = 10;

	auto f1 = [=](int a) {return a + v1; };

	int(*pf)(int) = f1; // ERROR
}

/*
class ClosureType  
{
	int v1;
public:
	ClosureType(int a) : v1(a) {}

	inline int operator()(int a) const { 	return a +v1;	}

	static inline int closure_func(int a) const	{return a + v1;	}
	
	typedef int(*PF)(int, int);

	operator PF() { return &ClosureType::closure_func; }
};
*/