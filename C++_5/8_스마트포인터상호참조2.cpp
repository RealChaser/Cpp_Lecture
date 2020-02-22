#include <iostream>
#include <string>
#include <memory>
using namespace std;

/*
int main()
{
	shared_ptr<int> p1(new int);

	{
		shared_ptr<int> p2 = p1;

		cout << p1.use_count() << endl; // ������� ���  2
	}

	cout << p1.use_count() << endl; // 1
	
}
*/



int main()
{
	weak_ptr<int> wp; // ��������� �������� �ʴ� ����Ʈ ������
	{
		shared_ptr<int> sp(new int);
		
		wp = sp; // ������� ���� ����

		cout << wp.use_count() << endl; // 1
		
	}
	/*
	// wp ����ϱ� : �ڿ��� �ı����� �ʾҴ��� Ȯ���ϰ� ����Ѵ�.
	if (wp.use_count() > 0) 
	{
		// ������� ��ü�� ��� ������ ������..
		// �ٸ� �����尡 shared_ptr<>�� ��ü�� ����Ű�� �־���
		// �ش� �����忡�� ����Ʈ �����Ͱ� �ı��ɼ��� �ִ�.!!
		// wp ����ص� �ɱ�� ?? ���� �ȵȴ�.
		
		// wp�� �����ϰ� �ϱ� ���ؼ� -> * �����ڰ� ����.
	
	}
	*/

	// weak_ptr �����

	shared_ptr<int> sp2 = wp.lock(); // ��Ƽ������ �����ϰ� lock

	if (sp2)
	{
		cout << "��ü�� ��� �ִ�.." << endl;
		*sp2 = 10;
	}
	else
		cout << "��ü �ı�" << endl;


	cout << wp.use_count() << endl;
}













