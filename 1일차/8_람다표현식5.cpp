
// ����ǥ������ �Լ����� �޴� ���  - 32 page �Ʒ� �κ�

//void foo( int(*f)(int, int) ) {} // 1. �Լ� ������, �ζ��� ġȯ�ȵ�
//void foo(function<int(int,int)> f) {} // 2.function,  �ζ��� ġȯ�ȵ�

// ���� auto�� ���� �Լ� ���ڿ� ���ɼ� �����ϴ�.
//void foo(auto f) {} // 

template<typename T> 
void foo(T f) {} 

int main()
{
	foo( [](int a, int b) { return a + b; } );
	foo( [](int a, int b) { return a - b; } );
}


