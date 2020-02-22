//cafe.naver.com / cppmaster 에서 넥슨 CPP14 게시판에서 2일차 사전 소스 받으세요
//boost.zip 파일도 받아서 C : \ work   디렉토리아래 압축 풀러 주세요..
//압축 풀때..boost 폴더명에 풀지 말고..그냥 "여기에 풀기"로 해주세요..

#include <iostream>
using namespace std;

template
// auto, decltype 소개와 trailing return(suffix return type)

//int foo()
auto foo() -> int   // trailing return
{
	return 10;
}
int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	auto n1 = x[1]; // 우변의 타입을 조사해서 좌변변수의 타입의 결정해달라
					// n1  int

	decltype(x[1]) n2 = x[1]; // int&

}