//4_typename  - 85 page

class AAA
{
public:
	//......
	//static int DWORD = 0;
	typedef int DWORD;
};
int p = 0;

template<typename T> typename T::DWORD foo(T a)
{
	// DWORD�� type�� �̸����� ����Ϸ��� typename�� �ʿ� �մϴ�.
	typename T::DWORD * p; // �̹����� �ؼ��� ������
				// 1. DWORD�� static ��� data�̰� ���ϱ� p�ϰ� �ִ�.
				// 2. DWORD�� typedef�� Ÿ���̴�.
				//    ������ ���� p�� �����ϰ� �ִ�.

	return 0;
}
int main()
{
	AAA aaa;
	foo(aaa);
}

