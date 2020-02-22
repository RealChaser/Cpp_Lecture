#include <iostream>
using namespace std;

class Test
{
	int data;
public:
	explicit Test(int n) : data(n) {}

//private:
//	Test(const Test&) = delete;
};

int main()
{
	// 아래 2줄의 차이점은.. ? 중요합니다.
	Test t1(5); // 1. 인자가 한개인 생성자 호출.

	Test t2 = 5;// 2. 5를 변환생성자를 사용해서 Test의 임시객체 생성
				//    임시객체를 t2에 복사생성자로 복사
}





