// �̹� ������ ���� �߿��մϴ�.

// 1. �Ϲ��Լ��� �ڽŸ��� Ÿ���� ����.
//    signature�� ������ ��� �Լ��� ���� Ÿ���̴�. - 28page �Ʒ� ǥ.

// 2. �Լ���ü�� �ڽŸ��� Ÿ���� �ִ�.
//    signature�� �����ص� ��� �Լ���ü�� �ٸ� Ÿ���̴�. 


struct Less   { inline bool operator()(int a, int b){ return a < b;	}};
struct Greater{	inline bool operator()(int a, int b){ return a > b;	}};

//------------------------
// ��å ������ �����ϰ� ��å�� �ζ��� ġȯ�� �����ϴ� �Լ�
// template�� �Լ���ü�� ����� ���.
template<typename T> void Sort(int* x, int sz, T cmp)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (cmp(x[i], x[j])) 
				swap(x[i], x[j]);
		}
	}
}

Less    f1; Sort(x, 10, f1); // f1�Լ� ��ü�� �ζ��� ġȯ�ȴ�.
Greater f2; Sort(x, 10, f2); // ?




