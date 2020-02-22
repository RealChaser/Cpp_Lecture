
template<typename T> void foo(T a)  {} // int a[10] = x.. error
									   // int* a = x; // ok
template<typename T> void goo(T& a) {} // int (&a)[10] = x

int main()
{
	int x[10] = { 0 };

	int y[10] = x; // error. 배열은 복사 생성 안됨.

	int* p = x;    // ok.. 1번재 요소의 주소로 변환

	int (&r)[10] = x; // ok.. 배열은 참조 할수 있다.

	foo(x); // T : int*
	goo(x); // T : int[10]
}



