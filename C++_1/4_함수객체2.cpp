// 이번 예제가 가장 중요합니다.

// 1. 일반함수는 자신만의 타입이 없다.
//    signature가 동일한 모든 함수는 같은 타입이다. - 28page 아래 표.

// 2. 함수객체는 자신만의 타입이 있다.
//    signature가 동일해도 모든 함수객체는 다른 타입이다. 


struct Less   { inline bool operator()(int a, int b){ return a < b;	}};
struct Greater{	inline bool operator()(int a, int b){ return a > b;	}};

//------------------------
// 정책 변경이 가능하고 정책의 인라인 치환을 지원하는 함수
// template과 함수객체로 만드는 기술.
template<typename T> void Sort(int* x, int sz, T cmp)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (cmp(x[i], x[j])) 
				swap(x[i], x[j]);
		}
	}
}

Less    f1; Sort(x, 10, f1); // f1함수 객체가 인라인 치환된다.
Greater f2; Sort(x, 10, f2); // ?




