// 6_�Լ�ã�¼���
#include <iostream>
using namespace std;

// �Լ� ���ý�
// 1. ��Ȯ�� Ÿ���� �Լ��� ã�´�. - "exactly matching"
// 2. template ���
// 3. data �ս��� ���� ��ȯ - "promotion"
// 4. data �ս��� �־ �Ͻ��� ����ȯ�� ���� ȣ�� ������ �Լ��� ã�´�.
// 5. �������� �Լ��� ����Ѵ�.

void foo(float) { cout << "float" << endl;  } // delete�� T�� ������� �ʰ�
											// error
template<typename T> void foo(T )     { cout << "T" << endl; }
void foo(double) { cout << "double" << endl; }
void foo(int   ) { cout << "int" << endl; }
void foo(...)    { cout << "..." << endl; }



int main()
{
	float f = 3.4f;

	foo(f);
}