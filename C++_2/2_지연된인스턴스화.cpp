// 2_�������ν��Ͻ�ȭ - 77 page

/*
class A
{
public:
	void foo(int a) { *a = 10; } // error
};
*/

// ������ �ν��Ͻ�ȭ : �Լ�(����Լ�) ���ø��߿��� ������ ���� ����
//					�ν��Ͻ�ȭ �����ʴ´�.(���� �ڵ�� ������ �ʴ´�.)
template<typename T> class A
{
	T data;
public:
	void foo(T a) { *a = 10; } // error
};

int main()
{
	//A a;
	A<int> a;
	//a.foo(0);
}




// ������ �ϸ� error�� �ֽ��ϴ�. �� �������� �����غ�����