// 함수를 제공안함 : 암시적 형변환이 가능한 함수를 찾는다.
// 삭제 : 호출안되게.

void foo(int a) {}
//void foo(double a); //선언만

void foo(double a) = delete; // 일반함수 도 지울수 있습니다.

template<typename T> void goo(T a) {}
void goo(double) = delete;

int main()
{
	foo(3);
	foo(3.4);

	goo(3.4);
}