// �Լ��� �������� : �Ͻ��� ����ȯ�� ������ �Լ��� ã�´�.
// ���� : ȣ��ȵǰ�.

void foo(int a) {}
//void foo(double a); //����

void foo(double a) = delete; // �Ϲ��Լ� �� ����� �ֽ��ϴ�.

template<typename T> void goo(T a) {}
void goo(double) = delete;

int main()
{
	foo(3);
	foo(3.4);

	goo(3.4);
}