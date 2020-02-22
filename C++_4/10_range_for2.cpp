// 10_range_for - 201 page
#include <iostream>
#include <vector>
#include <type_traits>
using namespace std;


struct Point3D
{
	int x = 0, y = 1, z = 2;
};
int* begin(Point3D& p) { return &p.x; }
int* end(Point3D& p)   { return &(p.z) + 1; }

int main()
{
	Point3D p;

	for (auto n : p)   // 될까요 ? 되도록 만들어 보세요.
		cout << n << endl;

}





