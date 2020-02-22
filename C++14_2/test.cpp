
template<typename T> void foo(T a) {}
template<typename T> void foo(T& a) {}

int main()
{
	int n = 10;
//	foo(n);
	foo(main);

}