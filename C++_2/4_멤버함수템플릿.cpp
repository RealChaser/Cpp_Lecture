//4_����Լ����ø� - 82 page

#include <iostream>
using namespace std;

// 1. Complex�� ���ø����� ����� ����
//	  double�̸� �ɰ� ������ double �� ���� ����.!

// 2. T a = T() : zero initializer
//	  T�� ǥ��Ÿ���̰ų� ������ �̸� 0����
//        ����� Ÿ���̸� default �����ڷ�

template<typename T> class Complex
{
	T re, im;
public:
	Complex(T a = T(), T b = T()) : re(a), im(b) {}


	// �Ϲ�ȭ�� ���� ������(generic ���� ������)

	// "U�� T�� ����(����) �ɼ� �ִٸ� 
	// "Complex<U> �� Complex<T>�� ����(����)�ɼ� �־�� �Ѵ�. 
	template<typename U> Complex(const Complex<U>& c);


	template<typename> friend class Complex;
};


// �Ϲ�ȭ�� ���� �������� �ܺ� ����
template<typename T> template<typename U>
Complex<T>::Complex(const Complex<U>& c) : re(c.re), im(c.im)
{
}




int main()
{
	Complex<int> c1(1, 1);
	Complex<int> c2 = c1; // ���� ������..

	Complex<double> c3 = c1; // ??

	c3 = c1; // ���Կ����ڵ� �ʿ� �մϴ�.!!


	Dog*    p1 = new Dog;
	Animal* p2 = p1;	// ok. ������!!


	// ����Ʈ �����͸� ������ ���ô�.
	sp<Dog>    p1 = new Dog;
	sp<Animal> p2 = p1;

	// ��� ����Ʈ������ Ŭ������ ���ø� ������ ���� �����ڿ� ���Կ����ڰ�
	// �ʿ��մϴ�!!
}	








