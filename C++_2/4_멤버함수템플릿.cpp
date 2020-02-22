//4_멤버함수템플릿 - 82 page

#include <iostream>
using namespace std;

// 1. Complex를 템플릿으로 만드는 이유
//	  double이면 될거 같지만 double 은 성능 문제.!

// 2. T a = T() : zero initializer
//	  T가 표준타입이거나 포인터 이면 0으로
//        사용자 타입이며 default 생성자로

template<typename T> class Complex
{
	T re, im;
public:
	Complex(T a = T(), T b = T()) : re(a), im(b) {}


	// 일반화된 복사 생성자(generic 복사 생성자)

	// "U가 T로 복사(대입) 될수 있다면 
	// "Complex<U> 는 Complex<T>로 복사(대입)될수 있어야 한다. 
	template<typename U> Complex(const Complex<U>& c);


	template<typename> friend class Complex;
};


// 일반화된 복사 생성자의 외부 구현
template<typename T> template<typename U>
Complex<T>::Complex(const Complex<U>& c) : re(c.re), im(c.im)
{
}




int main()
{
	Complex<int> c1(1, 1);
	Complex<int> c2 = c1; // 복사 생성자..

	Complex<double> c3 = c1; // ??

	c3 = c1; // 대입연산자도 필요 합니다.!!


	Dog*    p1 = new Dog;
	Animal* p2 = p1;	// ok. 다형성!!


	// 스마트 포인터를 생각해 봅시다.
	sp<Dog>    p1 = new Dog;
	sp<Animal> p2 = p1;

	// 모든 스마트포인터 클래스는 템플릿 버전의 복사 생성자와 대입연산자가
	// 필요합니다!!
}	








