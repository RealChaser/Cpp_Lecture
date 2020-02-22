// 7_부분전문화 - 89 page  => 가장 중요한 개념..

#include <iostream>
using namespace std;
// primary template
template<typename T> class Stack
{
public:
	void push() { cout << "T" << endl; }
};

// partial specialization( 부분 전문화, 부분 특화)
template<typename T> class Stack<T*>
{
public:
	void push() { cout << "T*" << endl; }
};
// specialization(전문화)
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






