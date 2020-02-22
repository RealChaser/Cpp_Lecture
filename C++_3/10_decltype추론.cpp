// 10_decltype√ﬂ∑–

int main()
{
	int n = 0;
	int* p = &n;

	int x[5] = { 1,2,3,4,5 };

	decltype(p)    d1; // int*
	decltype(*p)   d2 = n; // int&

	decltype(x[0]) d3 = n; // int&
	auto a3 = x[0]; //  int

	decltype(++n) d4  = n;  // int&

	decltype(n++) d5;  // int
}



