// 1_���ø��⺻ - 75 page

//int    square(int a)    { return a * a; }
//double square(double a) { return a * a; }

// ������ �ڵ尡 �ݺ��Ǹ� �ڵ� �����⸦ �������!!

// 1. ��ũ��
//   ���� : ��ó����� Ÿ���� �𸥴�. � Ÿ���� �Լ��� �ʿ�����
//          ���� MAKE_SQUARE(int)�� �����ؾ� �Ѵ�.
/*
#define MAKE_SQUARE( T ) T square(T a) { return a* a;}

MAKE_SQUARE(int)
MAKE_SQUARE(double)
*/

// 2. �����Ϸ��� ���� �ڵ� ���� - template

// 76 page
// ���ø� �ν��Ͻ�ȭ : ���ø��� Ÿ��(T)�� �����Ǿ ��¥ �Լ�(Ŭ����)�� 
//				     ����� ����

// �Ͻ��� �ν��Ͻ�ȭ : Ÿ���� �����Ϸ��� ����
// ����� �ν��Ͻ�ȭ : Ÿ���� ����ڰ� ����

// Code Bloat : ���ø��� �ʹ� ���� Ÿ������ �ν��Ͻ�ȭ�� �Ǿ
//				���� �ڵ尡 Ŀ���� ����

template<typename T> T square(T a) { return a* a;}


int main()
{
	square(3);
	square(3.3);

	short s = 3;
	square(s);      // short ���� ����..
	square<int>(s); // short ������ ������ ���� int ���� ���.
}









