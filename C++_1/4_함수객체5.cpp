// 4_함수객체5.
#include <iostream>
using namespace std;

// 1. 함수 객체 만들때 () 연산자 함수는 대부분 상수 함수로 만들게 됩니다.
// 2. 클래스이름() : 임시객체 생성

// 3. "함수객체(Function Object)"의 정확한 의미 : ()를 사용해서 호출가능한 객체

//	=> 함수, 함수포인터, 함수에 대한 참조, ()연산자를 재정의한 클래스

class Plus
{
public:
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

void foo(const Plus& p)
{
	p(1, 2); // ???
}

int main()
{
	Plus p;
	foo(p);

	foo( Plus() );//  클래스이름() : 임시객체를 만드는 표현
				//                 임시객체는 문장의 끝(;)에서 파괴

}












