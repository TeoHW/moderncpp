class Dialog 
{
public:
	void member_function(int a) {}
	static void static_member_function(int a) {}
};

void foo(int a) {}

int main()
{
	// void(*f)(int) = &Dialog::member_function;

	// 아래처럼 하면 멤버함수도 담을 수 있다. 
	// 그러나 이렇게까지 써야될까???
	void (Dialog::*f2)(int) = &Dialog::member_function;
	// f2(10); 	// 불가능하다
	Dialog d;
	(d.*f2)(10);
	

}