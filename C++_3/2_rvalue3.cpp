// 2_rvalue3

// rvalue�� ����..
int main()
{
	int n1 = 10;

	// ��Ģ 1. C++98�� ���� ������ lvalue �� ���� �Ѵ�.
	//        "lvalue reference"��� �̸��� ����մϴ�.
	int& r1 = n1; // ok.
	int& r2 = 10; // error

	// ��Ģ 2. const ������ rvalue�� lvalue�� ��� ����Ų��.
	//         ����ų���� ������ ������� �߰��ȴ�.
	const int& r3 = n1; // ok
	const int& r4 = 10; // ok


	// ��Ģ 3. C++11�� rvalue reference�� rvalue�� ����Ų��.
	int&& r5 = n1; // error
	int&& r6 = 10; // ok...

}