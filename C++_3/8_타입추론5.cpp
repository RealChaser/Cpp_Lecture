// ��Ģ 1, 2 ����
// 1. param�� ���϶�

void foo(T param) {}
foo(expr); // expr�� ����, const, volatile �Ӽ� �����ϰ� T Ÿ�԰���.


// 2. param�� �����϶�

void foo(T& param) {}
foo(expr); // expr�� const�� volatile ����.
		   // �� T& �̹Ƿ� expr�� ������ �����ϰ� T Ÿ�԰���.

void foo(const T& param) {}
foo(expr); // expr�� ������ const�� �����ϰ� T����.


int main()
{
	int n = 10;
	int& r = n;
	const int c = c;

	// T a1 = expr;
	auto a1 = n; // a1 : int
	auto a2 = r; // a2 : int
	auto a3 = c; // a3 : int

	auto& a1 = n; // a1 : int&
	auto& a2 = r; // a2 : int&
	auto& a3 = c; // a3 : const int&

}




