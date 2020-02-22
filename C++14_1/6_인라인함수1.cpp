// 1. 인라인 함수는 컴파일 시간 문법이다.
// 2. 인라인 함수라도 함수포인터에 담으면 치환될 수 없다.
int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	int n1 = Add1(1, 2); // 호출 
	int n2 = Add2(1, 2); // 치환..

	int(*f)(int, int);

	f = &Add2;

	int n3 = f(1, 2); // 치환 불가
}






