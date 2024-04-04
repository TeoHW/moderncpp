class Dialog 
{
public:
	void member_function(int a) {}
	static void static_member_function(int a) {}
};

int main()
{
	// 멤버 함수의 주소를 담는 포인터 만드는 법
//	void(*f)(int) = &Dialog::member_function; // error

	// #1. 멤버 함수 포인터 만드는 법 알아두세요
	void(Dialog::*f)(int) = &Dialog::member_function; // ok

	// #2. 멤버 함수 포인터 사용법
	f(10);
}