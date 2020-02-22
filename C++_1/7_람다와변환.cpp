// 7_���ٿͺ�ȯ

// 5_����
#include <algorithm>
using namespace std;

// 1. ���� ǥ������ ��Ȯ�� ���� - 30 page

// 2. ���� ǥ����(Lambda Expression) �� �Լ���ü�� ����� ǥ���ϻ��Դϴ�.

// 3. Ŭ����(Closure) : ���� ǥ������ ���� �ӽð�ü..
// ���������� ĸ�� ���� ���� ���ٸ��� �Լ� �����ͷ� ��ȯ�ȴ�.
//           ĸ���ϸ� �Լ������ͷ� ��ȯ�ɼ� ����.

int main()
{
	int v1 = 10;

	auto f = [=](int a, int b) { return a < b+v1;};

	// �Ʒ� �ڵ�� �� �ɱ�� ?
	bool(*pf)(int, int) = f; // f.�Լ������ͷ��Ǻ�ȯ�������Լ�()

	// �� ���� ǥ������ ���� �����Ϸ��� �Ʒ� Ŭ������ �����մϴ�.
	class LambdaClass
	{
		int v1;
	public:
		inline bool operator()(int a, int b) const 	{return a < b + v1;	}
		inline static bool helper(int a, int b) const { return a < b + v1; };
		typedef bool(*PF)(int, int);

		// �Լ������ͷ��� ��ȯ�� �����ϱ� ����  ��ȯ������ �Լ�
		operator PF() { return &LambdaClass::helper; }

	};


}


