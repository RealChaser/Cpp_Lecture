
template<typename T> void foo(T a)  {} // int a[10] = x.. error
									   // int* a = x; // ok
template<typename T> void goo(T& a) {} // int (&a)[10] = x

int main()
{
	int x[10] = { 0 };

	int y[10] = x; // error. �迭�� ���� ���� �ȵ�.

	int* p = x;    // ok.. 1���� ����� �ּҷ� ��ȯ

	int (&r)[10] = x; // ok.. �迭�� ���� �Ҽ� �ִ�.

	foo(x); // T : int*
	goo(x); // T : int[10]
}



