// �Ʒ� �ּ��� ���� �߿��մϴ�. - 26 page �Ʒ� �ڽ�

// 1. �Ϲ� �Լ��� �ڽŸ��� Ÿ���� ����
//    signature�� ������ �Լ��� ���� Ÿ���̴�.

// 2. �Լ���ü�� �ڽŸ��� Ÿ���� �ִ�
//    signature�� �����ص� ��� �ٸ� Ÿ���̴�.
struct Less    { inline bool operator()(int a, int b) { return a < b; }};
struct Greater { inline bool operator()(int a, int b) { return a > b; }};
//-------------------------------------------------------
// ��å ������ �����ѵ�, ��å�� �ζ��� ġȯ�� �Ǵ� �Լ�
// �Լ���ü �� ���ø��� ����� ���.
// ������ ������ �� �ڵ尡 �þ��. (���ø��̶� ��Ÿ�Կ� ���� �Լ��� �߰���)
template<typename T> void Sort(int* x, int sz, T cmp)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (cmp(x[i], x[j])) // 2. �� �Լ� ���.
				swap(x[i], x[j]);
		}
	}
}
Less    f1; Sort(x, 10, f1);
Greater f2; Sort(x, 10, f2);

