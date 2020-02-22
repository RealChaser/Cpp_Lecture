// 11_일관된초기화- 205 page
struct Point { int x, y; };

class Complex
{
	int re, im;
public:
	Complex(int a, int b) : re(a), im(b) {}
};

int main()
{
	/*
	int n1 = 0;
	int n2(0);
	int x[3] = { 1,2,3 };
	Point p = { 1,2 };
	Complex c(1, 1);
	*/
	
	// 변수(객체)에 종류에 상관없이 하나의 초기화 방식으로 초기화 하자.
	// "Uniform Initialize"
	/*
	// copy initialize
	int n1{ 0 };
	int n2{ 0 };
	int x[3]{ 1,2,3 };
	Point p{ 1,2 };
	Complex c{ 1, 1 };
	*/

	// list initialize
	int n1={ 0 };
	int n2={ 0 };
	int x[3]={ 1,2,3 };
	Point p={ 1,2 };
	Complex c={ 1, 1 };
}









