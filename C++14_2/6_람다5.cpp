#include <iostream>
using namespace std;

// ���ٿ� �Լ� ������

int main()
{
	auto f = [](int a, int b) { return a + b; };

	int(*pf)(int, int) = f; // f�� Ŭ���� ��ü

	cout << pf(1, 2) << endl; // 3
}
/*

class ClosureType  // Ŭ���� �̸��� �����Ϸ��� ������ ���ϰ� �˴ϴ�.
{
public:
	inline int operator()(int a, int b) const
	{
		return a + b;
	}

	// �Լ� �����ͷ��� ��ȯ�� ���ؼ� static �Լ��� �����˴ϴ�.
	static inline int closure_func(int a, int b) const
	{
		return a + b;
	}
	// Ŭ���� Ÿ���� �Լ� �����ͷ��� ��ȯ�� ����մϴ�.
	typedef int(*PF)(int, int);

	operator PF() { return &ClosureType::closure_func; }
};


sort(x, x + 10, ClosureType());







