// 11_logTime
// 3_�Ϻ���������9
#include <iostream>
using namespace std;


template<typename F, typename ... Types>
decltype(auto) logTime(F f, Types&& ... args)
{
	StopWatch sw; // �����ڿ��� ���� �ð� ���
				  // �Ҹ��ڿ��� �ɸ� �ð� ���

	return f(forward<Types>(args)...);
}


int main()
{

}












