// 7_static_assert- 186 page
#include <iostream>
#include <cassert>
#include <type_traits>
using namespace std;


#pragma pack(1)   // 구조체 정렬(Align)을 1바이트 단위로 해달라.
struct Packet
{
	char cmd;
	int  data;
};
static_assert(sizeof(Packet) == sizeof(char) + sizeof(int),
				"error, packet has unexpected padding");

template<typename T> void reset(T* p)
{
	static_assert(!is_polymorphic<T>::value,
				  "error, T has virtual function");

	memset(p, 0, sizeof(T));
}

class Test
{
	int data;
public:
	//virtual void foo() {}
};
//------------------------
template<typename F, typename ... Types>
decltype(auto) logTime(F f, Types&& ... args)
{
	static_assert( is_function<F>::value, "1'st argument must be function");

	return f(forward<Types>(args)...);
}

int main()
{
	int n = 10;

	logTime( n );

//	Test t;
//	reset(&t);
}










