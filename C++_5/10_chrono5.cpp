// 10_chrono
#include <iostream>
#include <chrono>
#include <string>
using namespace std;
using namespace std::chrono;

int main()
{
	// system_clock : ���� �ð��� ���� �� ����ϴ� Ŭ����
	// time_point : �ð��� �������� duration �� ����(��� �ð�)

	// seconds : 100�� ����
	// time_point : 1970�� ���� 100��
	
	system_clock::time_point tp = system_clock::now();

	// 1970�� 1�� 1�� ������ �������� �� �ʰ� ��������..
	nanoseconds ns = tp.time_since_epoch();

	cout << ns.count() << endl;


	// �ʷ� Ȯ��
	seconds s = duration_cast<seconds>(tp.time_since_epoch());
	cout << s.count() << endl;


	// ��¥�� Ȯ��
	using days = duration<int, ratio<60 * 60 * 24, 1 >>;

	days d = duration_cast<days>(tp.time_since_epoch());

	cout << d.count() << endl;


	// Į���� �������� ���
	time_t t = system_clock::to_time_t(tp); // time_point => time_t ��ȯ

	string str = ctime(&t); // time_t  => ���ڿ���

	cout << str << endl;
}







// www.cppreference.com �� ������ ������

// duration_cast<> �˻��� ������..




