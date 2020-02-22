template<typename T, typename U> struct Duo
{
	T v1;
	U v2;
	enum { N = 2 };
};


// recursive Duo�� ����ȭ �ϴ� ��� - 92 page
struct Null {}; // empty class 
				// 1. ���ø� ���ڷ� Ȱ��
				// 2. �Լ� �����ε��� Ȱ��

template<typename P1 = Null,
		 typename P2 = Null,
		 typename P3 = Null,
		 typename P4 = Null,
		 typename P5 = Null>
class xtuple : public Duo<P1, xtuple<P2, P3, P4, P5, Null>>
{
};

// xtuple�� ��ȿ�� Ÿ���� 2���϶��� ���� �κ� ����ȭ
template<typename P1, typename P2> 
class xtuple<P1, P2, Null, Null, Null> : public Duo<P1, P2>
{
};


int main()
{
	//										 Duo<long, double>	
	//							  Duo<short, xtuple< l, d, N, N, N>> 
	//					Duo<char, xtuple<s, l, d, N, N>>
	// �θ� : Duo< int, xtuple<c, s, l, d, N>>
	xtuple<int, char, short, long, double> t5;


	xtuple<int, double> t2;
}

