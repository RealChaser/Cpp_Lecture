
// Perfect forwarding �� 0

void foo(int* p) {}

template<typename F, typename T> void logTime(F f, T a)
{
	f(a);
}

int main()
{
	foo(0); 

	//logTime(foo, 0); // error

	logTime(foo, nullptr); // T�� nullptr_t �� �����ȴ�.
							// nullptr_t �� ��� Ÿ���� �����ͷ� �Ͻ���
							// ����ȯ �Ȥ�.
			// ��� : �Ϻ��� ���޿��� ������ ������ 0�� ������ ����.
			//		  nullptr �� �������.

}






