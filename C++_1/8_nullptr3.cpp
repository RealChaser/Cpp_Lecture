void foo(int* p) { }

// �Լ��� ������ �����ϴ� �Լ�..
template<typename F, typename T> void logTime(F f, T a)
{
	f(a); // ���� �Լ� ȣ��..
}

int main()
{
	//foo(0); // ok..
	//logTime(foo, 0); // 0�� int�� �����Ǿ foo(int*)�� ���޵ɼ� ����.

	logTime(foo, nullptr);
}