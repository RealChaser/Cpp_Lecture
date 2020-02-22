
// Perfect forwarding 과 0

void foo(int* p) {}

template<typename F, typename T> void logTime(F f, T a)
{
	f(a);
}

int main()
{
	foo(0); 

	//logTime(foo, 0); // error

	logTime(foo, nullptr); // T가 nullptr_t 로 결정된다.
							// nullptr_t 은 모든 타입의 포인터로 암시적
							// 형변환 된ㄷ.
			// 결론 : 완벽한 전달에서 포인터 변수에 0을 보낼수 없다.
			//		  nullptr 을 사용하자.

}






