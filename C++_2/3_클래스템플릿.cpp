// 3_Ŭ�������ø� - 79 page

template<typename T> class Stack
{
	T* buff;
public:
	// ������ ���
	Stack()    {}  // 1. ok.
	Stack<T>() {}  // 2. ���.

	// ���� ������
	Stack(const Stack& s)    {} // 1. ���
	Stack(const Stack<T>& s) {} // 2. ok.


	// ��� �Լ��� �ܺ� ����
	void push(T a);


	// Ŭ���� ���ø��� ��� �Լ� ���ø�
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
	Stack      s1; // error. Stack �� Ÿ���� �ƴϴ�. template(Ʋ)�̴�.
	Stack<int> s2; // ok.. Stack<int> �� Ÿ���̴�.
}





