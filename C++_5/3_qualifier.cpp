// 3_qualifier
#include <iostream>
using namespace std;

class Test
{
public:
	/*
	// C++98 의 예외 표시
	//void goo() throw(int)     // int 예외가 나올수 있다.
	//void goo() throw()        // 예외가 없다.
	void goo()					// 어떤 종류의 예외라도 나올수 있다.
	{
	}
	// C++11 : 예외의 종류가 중요하지 않고, 예외가 있다/없다는 사실이 중요하다
	//         그래서 noexcept 키워드가 생김

	// 멤버 함수 뒤에 붙을수 있는 지시어 정리
	void foo() const override final noexcept volatile
	{
	}
	*/
	// & 와 &&
	void hoo() &  { cout << "&" << endl; }
	void hoo() && { cout << "&&" << endl; }
};

int main()
{
	Test t;
	t.hoo(); // &

	Test().hoo(); // &&
}



