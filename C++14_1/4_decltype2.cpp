int main()
{
	int n = 10;
	int* p = &n;

	decltype(p)  d1; // int*

	// 변수이름에 연산자가 붙어 있는 경우..
	// 해당 연산의 결과가 좌변에 올수 있으면 : 참조
	//								  없으면 : 값
	decltype(*p) d2; //  int&
	*p = 10; // 사용가능. 좌변은 참조이어야 한다.

	int x[3] = { 1,2,3 };

	decltype(x[0]) d3;  // x[0] = 10.. int&
	decltype(n + n) d4; // n+n = 10 안된다  int
	decltype(++n) d5;   // ++n = 10 ok  int&
	decltype(n++) d6;   // n++ = 10 error  int

	decltype(n = 20) d7; // (n = 20) = 30.  ok..
						 // int&
}


