// 7_�κ�����ȭ - 89 page  => ���� �߿��� ����..

#include <iostream>
using namespace std;
// primary template
template<typename T> class Stack
{
public:
	void push() { cout << "T" << endl; }
};

// partial specialization( �κ� ����ȭ, �κ� Ưȭ)
template<typename T> class Stack<T*>
{
public:
	void push() { cout << "T*" << endl; }
};
// specialization(����ȭ)
template<> class Stack<char*>
{
public:
	void push() { cout << "char*" << endl; }
};

int main()
{
	Stack<int>   s1; s1.push();
	Stack<int*>  s2; s2.push();
	Stack<char*> s3; s3.push();
}






