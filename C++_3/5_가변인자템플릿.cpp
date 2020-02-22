// 5_가변인자템플릿

void goo(int a, int b, int c) {}

int hoo(int a) { return -a; }

template<typename ... Types > void foo(Types ... args)
{
	goo(args...); // ok
//	hoo(args...); // error
//	goo( hoo(args...) ); // error

	goo(hoo(args)... ); // ok.. goo( hoo(1), hoo(2), hoo(3))

}

int main()
{
	foo(1, 2, 3);
}


