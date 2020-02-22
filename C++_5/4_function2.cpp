// 4_function - 20 page 
#include <iostream>
using namespace std;

class Button
{
//	void(*handler)();
	
	void(Dialog::*handler)(); //멤버 함수 포인터 보관.
	Dialog* target;

public:
	void setHandler(void(*f)()) { handler = f; }
	void click()
	{
		handler(); // 등록된 함수 호출.
	}
};
//------------------------ 
void foo() { cout << "foo" << endl; }

int main()
{
	Button b1, b2;
	b1.setHandler(&foo);
	b1.click();
	//b2.click();
}




