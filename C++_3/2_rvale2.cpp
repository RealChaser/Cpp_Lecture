int main()
{
	const int c = 10;

	c = 20; // error.  c�� rvalue�ΰ��� lvalue�ΰ��� ?
			// ���� �Ұ����� lvalue

	// ��� rvalue�� ����̴�!!  1. ��   2. �ƴϿ�.  ��) 2
	10 = c;

	Point().x = 10; // error
	Point().set(10, 10); // ok.. �ƹ� ���� ����.
						// �ӽð�ü�� rvalue������ ��� �Լ��� �� ��������..
						// ����� �ƴϴ�.
}