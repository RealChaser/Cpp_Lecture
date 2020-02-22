//4_typename  - 85 page

class AAA
{
public:
	//......
	//static int DWORD = 0;
	typedef int DWORD;
};
int p = 0;

template<typename T> typename T::DWORD foo(T a)
{
	// DWORD를 type의 이름으로 사용하려면 typename이 필요 합니다.
	typename T::DWORD * p; // 이문장을 해석해 보세요
				// 1. DWORD는 static 멤버 data이고 곱하기 p하고 있다.
				// 2. DWORD는 typedef된 타입이다.
				//    포인터 변수 p를 선언하고 있다.

	return 0;
}
int main()
{
	AAA aaa;
	foo(aaa);
}

