class Singleton
{
public:
	Singleton()  = default; // ����Ʈ �����ڴ� ����� �޶�.

	Singleton(const Singleton&) = delete;
};

int main()
{
	Singleton s1;
	Singleton s2 = s1; 
}