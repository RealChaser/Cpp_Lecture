#include <iostream>
using namespace std;

class Test
{
	int data;
public:
	explicit Test(int n) : data(n) {}

//private:
//	Test(const Test&) = delete;
};

int main()
{
	// �Ʒ� 2���� ��������.. ? �߿��մϴ�.
	Test t1(5); // 1. ���ڰ� �Ѱ��� ������ ȣ��.

	Test t2 = 5;// 2. 5�� ��ȯ�����ڸ� ����ؼ� Test�� �ӽð�ü ����
				//    �ӽð�ü�� t2�� ��������ڷ� ����
}





