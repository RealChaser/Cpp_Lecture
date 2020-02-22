// 6_����Ʈ������ - 159 page
#include <iostream>
using namespace std;

class Car
{
public:
	void Go() { cout << "Car Go" << endl; }
};
// ���� : ������ ��ü�� �ٸ� Ÿ���� ������ ��Ȱ�� �ϴ� ��.

// ���� : ->, * �����ڸ� ������ �ؼ� ������ ó�� ���̰� �Ѵ�.

// ���� : ��¥ �����Ͱ� �ƴ϶� ��ü�̴�.
//	      ����/����/����/�Ҹ��� ��� ������ ����ڰ� �����.
//        ���� �Ҹ��ڿ��� �ڵ� ���� ��� ����

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*()   { return *obj; } // ���� .. �ݵ�� ���������ؾ� �մϴ�.
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car )

	p->Go(); // ( p.operator->()) Go() �� ���������
			 // ( p.operator->())->Go() ó�� �ؼ� �˴ϴ�.

	(*p).Go();
}





