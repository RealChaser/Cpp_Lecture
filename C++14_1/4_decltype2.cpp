int main()
{
	int n = 10;
	int* p = &n;

	decltype(p)  d1; // int*

	// �����̸��� �����ڰ� �پ� �ִ� ���..
	// �ش� ������ ����� �º��� �ü� ������ : ����
	//								  ������ : ��
	decltype(*p) d2; //  int&
	*p = 10; // ��밡��. �º��� �����̾�� �Ѵ�.

	int x[3] = { 1,2,3 };

	decltype(x[0]) d3;  // x[0] = 10.. int&
	decltype(n + n) d4; // n+n = 10 �ȵȴ�  int
	decltype(++n) d5;   // ++n = 10 ok  int&
	decltype(n++) d6;   // n++ = 10 error  int

	decltype(n = 20) d7; // (n = 20) = 30.  ok..
						 // int&
}


