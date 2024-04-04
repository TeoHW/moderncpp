class Dialog 
{
public:
	void member_function(int a) {}
	static void static_member_function(int a) {}
};

void foo(int a) {}

int main()
{
	void(*f1)(int) = &foo; // ok
	void(Dialog::*f2)(int) = &Dialog::member_function;	

	Dialog dlg;

	// 함수포인터로 함수 호출하기
	f1(10);
	(dlg.*f2)(10);

	// f1, f2의 사용법이 다르니까 불편합니다.
	// 그래서 C++17에서 std::invoke 를 만들었습니다.
	
}