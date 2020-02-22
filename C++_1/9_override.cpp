// 9_override- 220 page

class Base
{
public:
	virtual void foo(int a) {}
	virtual void goo() {}
	virtual void hoo() const {}
	void koo() {}
};
/*
class Derived : public Base
{
public:
	// 개발자가 실수 했다.!
	virtual void foo(double a) {}
	virtual void gooo() {}
	virtual void hoo() {}
	virtual void koo() {}
};
*/
/*
class Derived : public Base
{
public:
	// 개발자가 실수 했다.!
	virtual void foo(double a) override {}
	virtual void gooo() override {}
	virtual void hoo()  override {}
	virtual void koo()  override {}
};
*/

class Derived : public Base
{
public:
	virtual void foo(int a) override final {} // 다음 파생클래스 부터는
											// 재정의 할수 없다.
	virtual void goo() override {}
};

class AAA : public Derived
{
public:
//	virtual void foo(int a) override {} // error											 
	virtual void goo()      override {}
};

int main()
{

}




