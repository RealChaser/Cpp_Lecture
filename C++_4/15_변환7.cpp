
// C++11
class Test
{
public:
	// C++11 : 변환 연산자도 explicit가 된다
	//          암시적 변환은 안되고 명시적 변환만 된다.
	explicit  operator bool() { return true; }
};
int main()
{
	Test t;
	
	// bool b = t; //error
	bool b = static_cast<bool>(t); // ok

	if ( t ) {} // ok.. bool로 변환 가능.

	// t << 2; // error
}







