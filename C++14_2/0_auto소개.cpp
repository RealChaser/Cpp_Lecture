//cafe.naver.com / cppmaster ���� �ؽ� CPP14 �Խ��ǿ��� 2���� ���� �ҽ� ��������
//boost.zip ���ϵ� �޾Ƽ� C : \ work   ���丮�Ʒ� ���� Ǯ�� �ּ���..
//���� Ǯ��..boost ������ Ǯ�� ����..�׳� "���⿡ Ǯ��"�� ���ּ���..

#include <iostream>
using namespace std;

template
// auto, decltype �Ұ��� trailing return(suffix return type)

//int foo()
auto foo() -> int   // trailing return
{
	return 10;
}
int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	auto n1 = x[1]; // �캯�� Ÿ���� �����ؼ� �º������� Ÿ���� �����ش޶�
					// n1  int

	decltype(x[1]) n2 = x[1]; // int&

}