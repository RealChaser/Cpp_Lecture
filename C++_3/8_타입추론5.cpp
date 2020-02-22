// 규칙 1, 2 정리
// 1. param이 값일때

void foo(T param) {}
foo(expr); // expr의 참조, const, volatile 속성 제거하고 T 타입결정.


// 2. param이 참조일때

void foo(T& param) {}
foo(expr); // expr의 const와 volatile 유지.
		   // 단 T& 이므로 expr의 참조는 제거하고 T 타입결정.

void foo(const T& param) {}
foo(expr); // expr의 참조와 const를 제거하고 T결정.


int main()
{
	int n = 10;
	int& r = n;
	const int c = c;

	// T a1 = expr;
	auto a1 = n; // a1 : int
	auto a2 = r; // a2 : int
	auto a3 = c; // a3 : int

	auto& a1 = n; // a1 : int&
	auto& a2 = r; // a2 : int&
	auto& a3 = c; // a3 : const int&

}




