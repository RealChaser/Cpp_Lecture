// 15_decltype2

int main()
{
	int n = 10;
	int* p = &n;

	int x[4] = { 1,2,3,4 };
	
	// 각 타입 추론해보세요
	decltype(n)    d1; // int
	decltype(p)    d2; // int*
	decltype(*p)   d3 = n; // int&

//	*p = 30; // ok

	d3 = 100;

	decltype(x[0]) d4; // int&

	++n = 20;

	decltype(++n)  d5; // int&

	decltype(n++)  d6; // int

	//n + n = 10;

	decltype(n+n)  d7; // int
					   
}




