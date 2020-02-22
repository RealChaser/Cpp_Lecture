class Singleton
{
public:
	Singleton()  = default; // 디폴트 생성자는 만들어 달라.

	Singleton(const Singleton&) = delete;
};

int main()
{
	Singleton s1;
	Singleton s2 = s1; 
}