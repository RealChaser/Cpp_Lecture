
typedef int DWORD;
typedef void(*PFUNC)(int);

// C++11 typedef ��� using ���
using DWORD = int;			// typedef int DWORD; �� ����
using PFUNC = void(*)(int);

int main()
{
	DWORD n;
	PFUNC f;
}