// 11_�ϰ����ʱ�ȭ2
int main()
{
	int n1 = 3.4; // ok.

	int n2{ 3.4 };// error.   "preventing narrow"

	char c{ 300 }; // error
}

class Test
{
	int data{ 0 };
}