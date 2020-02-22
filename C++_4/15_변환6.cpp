#include <iostream>
using namespace std;

int main()
{
	int n = 0;

	cin >> n;  // 'a' 를 입력하면 ?
	
	//if ( cin.fail() ) cout << "실패" << endl;

	if (cin) // cin.operator void*()로 변환
		cout << "성공" << endl;

	cout << n << endl;
}

class istream
{
public:
	//operator bool() { 조사후 ? true : false; }
	//operator void*() { 조사후 ? this : 0; }  => C++ 98

	operator 함수포인터타입() { 조사후 ? 아무함수주소나리턴 : 0; }
};
istream cin;

// if문에 넣기 위해 bool로 변환 했다. if (cin) // ok..
cin << n; 

// if문에 넣지만 shift연산 불가능하게 하자
//delete cin; // ?

// boost 팀의 선택 : 함수포인터로변환..










