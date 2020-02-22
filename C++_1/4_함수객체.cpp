// 4_ÇÔ¼ö°´Ã¼ - 26 page
#include <iostream>
using namespace std;

// C++98 °³³ä 
class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	Plus p;
	int n = p(1, 2);  // °´Ã¼¸¦ ÇÔ¼ö Ã³·³ »ç¿ë=> ÇÔ¼ö °´Ã¼(Functor)
	cout << n << endl;

	// a + b; // a.operator+ (b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2)
}


