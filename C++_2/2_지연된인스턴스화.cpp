// 2_지연된인스턴스화 - 77 page

/*
class A
{
public:
	void foo(int a) { *a = 10; } // error
};
*/

// 지연된 인스턴스화 : 함수(멤버함수) 템플릿중에서 사용되지 않은 것은
//					인스턴스화 되지않는다.(실제 코드로 만들지 않는다.)
template<typename T> class A
{
	T data;
public:
	void foo(T a) { *a = 10; } // error
};

int main()
{
	//A a;
	A<int> a;
	//a.foo(0);
}




// 컴파일 하면 error가 있습니다. 왜 에러인지 생각해보세요