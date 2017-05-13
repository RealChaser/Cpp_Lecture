// 아래 주석이 아주 중요합니다. - 26 page 아래 박스

// 1. 일반 함수는 자신만의 타입이 없다
//    signature가 동일한 함수는 같은 타입이다.

// 2. 함수객체는 자신만의 타입이 있다
//    signature가 동일해도 모두 다른 타입이다.
struct Less    { inline bool operator()(int a, int b) { return a < b; }};
struct Greater { inline bool operator()(int a, int b) { return a > b; }};
//-------------------------------------------------------
// 정책 변경이 가능한데, 정책의 인라인 치환이 되는 함수
// 함수객체 와 템플릿을 사용한 기술.
// 하지만 컴파일 후 코드가 늘어난다. (템플릿이라서 두타입에 대한 함수가 추가됨)
template<typename T> void Sort(int* x, int sz, T cmp)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (cmp(x[i], x[j])) // 2. 비교 함수 사용.
				swap(x[i], x[j]);
		}
	}
}
Less    f1; Sort(x, 10, f1);
Greater f2; Sort(x, 10, f2);

