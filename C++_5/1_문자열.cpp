// 1_���ڿ� - 226 page
#include <string>
#include <iostream>
using namespace std;

int main()
{
	//string s = "C:\\AAA\\BBB\\CCC";

	// Raw String Literal
	// ���ڿ� ���� : "(     �� : )"
	//string s = R"(C:\AAA\BBB\CCC)";

	// "�� ǥ���Ϸ��� - �ٷ� ����ϸ� �ȴ�.
	//string s = R"(C:\AA"A\BBB\CCC)";


	// �ٽ� : )" �� �ְ� �ʹٸ�..
	
	string s = R"***(C:\AA)"A\BBB\CCC)***";
	
	cout << s << endl;
}







