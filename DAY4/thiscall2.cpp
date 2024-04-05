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
	void(*f1)(int) = &foo;
	// void(*f2)(int) = &Dialog::member_function; // (Dialog*,  int)인자 형식이기 때문에 담기지 않는다. 
	// 핵심 : 일반  함수 포인터에 "멤버 함수" 주소를 담을 수 없다 (this때문)
	// 일반 함수 포인터에 "static 멤버 함수" 주소를 담을 수 있다.
	void(*f)(int) = &Dialog::member_function;
	void (Dialog::*f2)(int) = &Dialog::member_function;
	void(*f3)(int) = &Dialog::static_member_function;
}