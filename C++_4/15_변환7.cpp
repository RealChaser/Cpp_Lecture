
// C++11
class Test
{
public:
	// C++11 : ��ȯ �����ڵ� explicit�� �ȴ�
	//          �Ͻ��� ��ȯ�� �ȵǰ� ����� ��ȯ�� �ȴ�.
	explicit  operator bool() { return true; }
};
int main()
{
	Test t;
	
	// bool b = t; //error
	bool b = static_cast<bool>(t); // ok

	if ( t ) {} // ok.. bool�� ��ȯ ����.

	// t << 2; // error
}







