void foo(int* p) { }

// 함수의 성능을 측정하는 함수..
template<typename F, typename T> void logTime(F f, T a)
{
	f(a); // 원본 함수 호출..
}

int main()
{
	//foo(0); // ok..
	//logTime(foo, 0); // 0은 int로 결정되어서 foo(int*)에 전달될수 없다.

	logTime(foo, nullptr);
}