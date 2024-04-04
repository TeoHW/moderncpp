class Dialog 
{
public:
	void member_function(int a) {}
	static void static_member_function(int a) {}
};

void foo(int a) {}

int main()
{
	// 다음중 에러는 ?
	void(*f1)(int) = &foo; // ok
	void(*f2)(int) = &Dialog::member_function;	// error
	void(*f3)(int) = &Dialog::static_member_function; // ok

	// 핵심 : 일반함수 포인터에 "멤버 함수" 주소를 담을수 없다.(this때문)
	//        일반함수 포인터에 "static 멤버 함수" 주소를 담을수 있다.
}