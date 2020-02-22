// 11_�����������ø� - 108 page
#include <iostream>
using namespace std;

// �ٽ� : 1��° ���ڴ� �ݵ�� ������ Ÿ������ �޾ƾ� �Ѵ�.

template<typename T, typename ... Types> 
void foo(T value, Types ... args)
{
	static int n = 0;
	n++;

	cout << n << " : " << typeid(T).name() << " : " << value << endl;

	foo(args...);  // ȣ���ϸ� value : "ddd",  args : 3.4
					// value : 3.4   args : 
					// ���� ������ foo() ȣ��
};

void foo() {} // ��� ���Ḧ ����..




int main()
{
	foo(1, "ddd", 2.3); // value : 1    args : "ddd", 2.3

	//printf("%d");
}





