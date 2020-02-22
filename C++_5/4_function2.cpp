// 4_function - 20 page 
#include <iostream>
using namespace std;

class Button
{
//	void(*handler)();
	
	void(Dialog::*handler)(); //��� �Լ� ������ ����.
	Dialog* target;

public:
	void setHandler(void(*f)()) { handler = f; }
	void click()
	{
		handler(); // ��ϵ� �Լ� ȣ��.
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




