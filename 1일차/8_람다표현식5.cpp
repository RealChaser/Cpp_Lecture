
// 람다표현식을 함수에서 받는 방법  - 32 page 아래 부분

//void foo( int(*f)(int, int) ) {} // 1. 함수 포인터, 인라인 치환안됨
//void foo(function<int(int,int)> f) {} // 2.function,  인라인 치환안됨

// 주의 auto는 절대 함수 인자에 사용될수 없습니다.
//void foo(auto f) {} // 

template<typename T> 
void foo(T f) {} 

int main()
{
	foo( [](int a, int b) { return a + b; } );
	foo( [](int a, int b) { return a - b; } );
}


