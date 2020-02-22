// 1_문자열 - 226 page
#include <string>
#include <iostream>
using namespace std;

int main()
{
	//string s = "C:\\AAA\\BBB\\CCC";

	// Raw String Literal
	// 문자열 시작 : "(     끝 : )"
	//string s = R"(C:\AAA\BBB\CCC)";

	// "을 표현하려면 - 바로 사용하면 된다.
	//string s = R"(C:\AA"A\BBB\CCC)";


	// 핵심 : )" 를 넣고 싶다면..
	
	string s = R"***(C:\AA)"A\BBB\CCC)***";
	
	cout << s << endl;
}







