// 10_chrono
#include <iostream>
#include <chrono>
#include <string>
using namespace std;
using namespace std::chrono;

int main()
{
	// system_clock : 현재 시간을 얻을 때 사용하는 클래스
	// time_point : 시간의 시작점과 duration 을 보관(경과 시간)

	// seconds : 100초 보관
	// time_point : 1970년 부터 100초
	
	system_clock::time_point tp = system_clock::now();

	// 1970년 1월 1일 정오를 기준으로 몇 초가 지났는지..
	nanoseconds ns = tp.time_since_epoch();

	cout << ns.count() << endl;


	// 초로 확인
	seconds s = duration_cast<seconds>(tp.time_since_epoch());
	cout << s.count() << endl;


	// 날짜로 확인
	using days = duration<int, ratio<60 * 60 * 24, 1 >>;

	days d = duration_cast<days>(tp.time_since_epoch());

	cout << d.count() << endl;


	// 칼린더 형식으로 출력
	time_t t = system_clock::to_time_t(tp); // time_point => time_t 변환

	string str = ctime(&t); // time_t  => 문자열로

	cout << str << endl;
}







// www.cppreference.com 에 접속해 보세요

// duration_cast<> 검색해 보세요..




