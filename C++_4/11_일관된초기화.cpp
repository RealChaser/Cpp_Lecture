// 11_�ϰ����ʱ�ȭ- 205 page
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
	
	// ����(��ü)�� ������ ������� �ϳ��� �ʱ�ȭ ������� �ʱ�ȭ ����.
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









