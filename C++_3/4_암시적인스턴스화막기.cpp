// 4_암시적인스턴스화막기
template<typename T> class list
{
public:
	list(int sz, T value) {}
};

template<typename T> struct identity
{
	typedef T type;
};

template<typename T> 
//void foo( T a)
void foo(typename identity<T>::type a)  // 왜 이렇게 했을까요 ?
{					// 함수 템플릿을 암시적 인스턴스화로 사용못하도록하기위해
}


int main()
{
	foo(0);		// 암시적 인스턴스화. T 타입을 컴파일러가 결정.
	foo<int>(0);

	list<int> st1(10, 0); // ok
	//list<> st2(10, 0); // error. 클래스 템플릿은 암시적 인스턴스화가 안됨.
}


