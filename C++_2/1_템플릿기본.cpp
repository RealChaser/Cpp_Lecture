// 1_템플릿기본 - 75 page

//int    square(int a)    { return a * a; }
//double square(double a) { return a * a; }

// 유사한 코드가 반복되면 코드 생성기를 사용하자!!

// 1. 매크로
//   단점 : 전처리기는 타입을 모른다. 어떤 타입의 함수가 필요한지
//          직접 MAKE_SQUARE(int)를 선언해야 한다.
/*
#define MAKE_SQUARE( T ) T square(T a) { return a* a;}

MAKE_SQUARE(int)
MAKE_SQUARE(double)
*/

// 2. 컴파일러에 의한 코드 생성 - template

// 76 page
// 템플릿 인스턴스화 : 템플릿의 타입(T)가 결정되어서 진짜 함수(클래스)를 
//				     만드는 과정

// 암시적 인스턴스화 : 타입을 컴파일러가 결정
// 명시적 인스턴스화 : 타입을 사용자가 결정

// Code Bloat : 템플릿이 너무 많은 타입으로 인스턴스화가 되어서
//				목적 코드가 커지는 현상

template<typename T> T square(T a) { return a* a;}


int main()
{
	square(3);
	square(3.3);

	short s = 3;
	square(s);      // short 버전 생성..
	square<int>(s); // short 버전을 만들지 말고 int 버전 사용.
}









