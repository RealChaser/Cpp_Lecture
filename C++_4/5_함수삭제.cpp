// 5_�Լ�����

// Ư���Լ���
// 1. �������� ������    : �Ͻ��� ����ȯ�� ���ؼ� �ٸ� �Լ�(�����̸�)�� ȣ���Ҽ� �ִ�.
// 2. ���� �����ϴ°�  : link ������ �߻�. �Լ� ȣ�� �ȵ�.
// 3. ����(delete)�ϴ°� : �Լ� ���� ������ �ð��� ���� �߻�.
int square(int a) { return a * a; }

//double square(double a);
double square(double a) = delete;
#include <iostream>
using namespace std;


/*
template<typename T> void foo(T a) { cout << "T" << endl; }  // 1

void foo(int a) { cout << "int" << endl; }   // 2

void foo(double) = delete;
*/
int main()
{
//	square(3);
//	square(3.3); // ?

	foo(3); // 2
	foo(2.3); // 1 ?2

}



