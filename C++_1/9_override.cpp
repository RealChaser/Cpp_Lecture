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
	// �����ڰ� �Ǽ� �ߴ�.!
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
	// �����ڰ� �Ǽ� �ߴ�.!
	virtual void foo(double a) override {}
	virtual void gooo() override {}
	virtual void hoo()  override {}
	virtual void koo()  override {}
};
*/

class Derived : public Base
{
public:
	virtual void foo(int a) override final {} // ���� �Ļ�Ŭ���� ���ʹ�
											// ������ �Ҽ� ����.
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




