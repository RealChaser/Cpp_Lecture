// 3_클래스템플릿 - 79 page

template<typename T> class Stack
{
	T* buff;
public:
	// 생성자 모양
	Stack()    {}  // 1. ok.
	Stack<T>() {}  // 2. 허용.

	// 복사 생성자
	Stack(const Stack& s)    {} // 1. 허용
	Stack(const Stack<T>& s) {} // 2. ok.


	// 멤버 함수의 외부 구현
	void push(T a);


	// 클래스 템플릿의 멤버 함수 템플릿
	template<typename U> T foo(U a);
};

template<typename T> template<typename U> T Stack<T>::foo(U a)
{

}


template<typename T> void Stack<T>::push(T a)
{

}






void foo(Stack& s) {} // error

int main()
{
	Stack      s1; // error. Stack 은 타입이 아니다. template(틀)이다.
	Stack<int> s2; // ok.. Stack<int> 는 타입이다.
}





