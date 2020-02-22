// 6_함수찾는순서
#include <iostream>
using namespace std;

// 함수 선택시
// 1. 정확한 타입의 함수를 찾는다. - "exactly matching"
// 2. template 사용
// 3. data 손실이 없는 변환 - "promotion"
// 4. data 손실이 있어도 암시적 형변환을 통해 호출 가능한 함수를 찾는다.
// 5. 가변인자 함수를 사용한다.

void foo(float) { cout << "float" << endl;  } // delete시 T를 사용하지 않고
											// error
template<typename T> void foo(T )     { cout << "T" << endl; }
void foo(double) { cout << "double" << endl; }
void foo(int   ) { cout << "int" << endl; }
void foo(...)    { cout << "..." << endl; }



int main()
{
	float f = 3.4f;

	foo(f);
}