
class Base
{
public:
	virtual void foo(int a) {}
	virtual void goo() const {}
	virtual void hoo() {}
	void koo() {}
};
class Derived : public Base
{
public:
	// �Ʒ� �ڵ带 �����غ�����
	virtual void foo(double) override {}
	virtual void goo() override {}
	virtual void hooo()override {}
	virtual void koo() override {}
};

int main() {}


