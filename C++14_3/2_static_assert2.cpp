#include <iostream>
#include <type_traits>
using namespace std;

#pragma pack(1) 
struct PACKET
{
	char cmd;
	int  data;
};

static_assert(sizeof(PACKET) == sizeof(char) + sizeof(int),
												"unexpected padding");




template<typename T> void foo(T* p)
{
	// static_assert와 traits를 섞으면 좋습니다.
	static_assert( !is_polymorphic<T>::value, "error T has virtual Function!!") )

	memset(p, 0, sizeof(T));
}


template<typename F, typename ... Types>
decltype(auto) logTime(F f, Types&& ... args)
{
	static_assert(!is_function<T>::value, "f 는 반드시 함수 이어야 합니다.");

	return f(forward<Types>(args)...);
}

int main()
{
	int n1 = 10;

	logTime(n1, 10, 20);
}





