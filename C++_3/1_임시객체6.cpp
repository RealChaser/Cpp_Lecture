// �ӽð�ü�� �����Ǵ� �پ��� ���
int main()
{
	
	int n = 3;

	int* p = &n;
	*p = 10;

	int x[3] = { 1,2,3 };

	x[0] = 10;
	n * n = 10; // error

	++n = 10; // ok.. ���� ����.
//	n++ = 10; // error  int temp = n; n=n+1; return temp;  

	n = 3;
	int k = (++n) * (++n);  // n������ * n������
	cout << k << endl;

	n + k = 10; // error int temp = n+k; return temp
	(n = k) = 10; //

	Derived d;
	(static_cast<Base>(d)).value = 10; // error. �� ĳ����. �ӽð�ü ����
	(static_cast<Base&>(d)).value = 10;// ok.. �ӽð�ü ���� �ȵ�.
}


/*
int operator++����(int n)
{
	int temp = n;
	n = n + 1;
	return temp;
}
*/