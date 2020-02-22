template<typename T, typename U> struct Duo
{
	T v1;
	U v2;
	enum { N = 2 };
};


// recursive Duo를 선형화 하는 기술 - 92 page
struct Null {}; // empty class 
				// 1. 템플릿 인자로 활용
				// 2. 함수 오버로딩에 활용

template<typename P1 = Null,
		 typename P2 = Null,
		 typename P3 = Null,
		 typename P4 = Null,
		 typename P5 = Null>
class xtuple : public Duo<P1, xtuple<P2, P3, P4, P5, Null>>
{
};

// xtuple이 유효한 타입이 2개일때를 위한 부분 전문화
template<typename P1, typename P2> 
class xtuple<P1, P2, Null, Null, Null> : public Duo<P1, P2>
{
};


int main()
{
	//										 Duo<long, double>	
	//							  Duo<short, xtuple< l, d, N, N, N>> 
	//					Duo<char, xtuple<s, l, d, N, N>>
	// 부모 : Duo< int, xtuple<c, s, l, d, N>>
	xtuple<int, char, short, long, double> t5;


	xtuple<int, double> t2;
}

