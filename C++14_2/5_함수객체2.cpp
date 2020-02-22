// 6_�Լ���ü2 - 26 page

// 1. �Ϲ��Լ��� �ڽŸ��� Ÿ���� ����.. 
//    Signature�� ������ �Լ��� ��� ���� Ÿ���̴�.

// 2. �Լ���ü�� �ڽŸ��� Ÿ���� �ִ�.
//    Signature�� �����ص� ��� �ٸ� Ÿ���̴�.

struct Less
{
	inline bool operator()(int a, int b) { return a < b; }
};

struct Greater
{
	inline bool operator()(int a, int b) { return a > b; }
};

//-------------------------------
// ��å ��ü�� �����ϰ� �ζ��� ġȯ �Ǵ� �Լ�
// ���ø��� �Լ� ��ü��!!
template<typename T> void Sort(int* x, int n, T cmp)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)

			if (cmp(x[i], x[j]))
				swap(x[i], x[j]);
}


Less    f1; Sort(x, 10, f1);
Greater f2; Sort(x, 10, f2);

