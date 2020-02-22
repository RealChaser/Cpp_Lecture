// 임시객체가 생성되는 다양한 경우
int main()
{
	
	int n = 3;

	int* p = &n;
	*p = 10;

	int x[3] = { 1,2,3 };

	x[0] = 10;
	n * n = 10; // error

	++n = 10; // ok.. 참조 리턴.
//	n++ = 10; // error  int temp = n; n=n+1; return temp;  

	n = 3;
	int k = (++n) * (++n);  // n의참조 * n의참조
	cout << k << endl;

	n + k = 10; // error int temp = n+k; return temp
	(n = k) = 10; //

	Derived d;
	(static_cast<Base>(d)).value = 10; // error. 값 캐스팅. 임시객체 생성
	(static_cast<Base&>(d)).value = 10;// ok.. 임시객체 생성 안됨.
}


/*
int operator++후위(int n)
{
	int temp = n;
	n = n + 1;
	return temp;
}
*/