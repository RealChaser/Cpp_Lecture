// 4_�Ͻ����ν��Ͻ�ȭ����
template<typename T> class list
{
public:
	list(int sz, T value) {}
};

template<typename T> struct identity
{
	typedef T type;
};

template<typename T> 
//void foo( T a)
void foo(typename identity<T>::type a)  // �� �̷��� ������� ?
{					// �Լ� ���ø��� �Ͻ��� �ν��Ͻ�ȭ�� �����ϵ����ϱ�����
}


int main()
{
	foo(0);		// �Ͻ��� �ν��Ͻ�ȭ. T Ÿ���� �����Ϸ��� ����.
	foo<int>(0);

	list<int> st1(10, 0); // ok
	//list<> st2(10, 0); // error. Ŭ���� ���ø��� �Ͻ��� �ν��Ͻ�ȭ�� �ȵ�.
}


