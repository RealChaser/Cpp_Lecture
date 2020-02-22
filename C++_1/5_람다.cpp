// 5_����
#include <algorithm>
using namespace std;

// 1. ���� ǥ������ ��Ȯ�� ���� - 30 page

// 2. ���� ǥ����(Lambda Expression) �� �Լ���ü�� ����� ǥ���ϻ��Դϴ�.

// 3. Ŭ����(Closure) : ���� ǥ������ ���� �ӽð�ü..


int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };


	// sort()�� 3��° ���ڴ� �ݵ�� ()�� ȣ�Ⱑ���� ��ü�� ���޵Ǿ� �մϴ�..
	sort(x, x + 10, [](int a, int b) { return a < b; } );



	// �� ���� ǥ������ ���� �����Ϸ��� �Ʒ� Ŭ������ �����մϴ�.
	class LambdaClass
	{
	public:
		inline bool operator()(int a, int b) const
		{
			return a < b;
		}
	};
	sort(x, x + 10, LambdaClass() );


}


