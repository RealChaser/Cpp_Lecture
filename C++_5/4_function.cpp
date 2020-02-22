// 4_function - 20 page 
#include <iostream>
using namespace std;

class Button
{
public:
	void click()
	{
		// 버튼이 눌렸다는 사실을 외부에 알려야 한다.
		// "객체가 이벤트를 발생한다" 라고 표현.
	}
};

int main()
{
	Button b1, b2;
	b1.click();
	b2.click();
}




