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
//	f(10); // error. 객체가 없습니다. 객체.member_function() 이어야 합니다.

	Dialog dlg;
//	dlg.f(10); // error. dlg 안에 f라는 멤버는 없습니다.

	// 이럴때 사용하는 연산자가 "pointer to member operator"인 .* 연산자
//	dlg.*f(10); // 연산자 우선순위 문제로 에러
				// .* 보다 ( ) 가 우선순위 높음

	(dlg.*f)(10); // ok.. 이코드가 멤버 함수 포인터로
				//			함수를 호출하는 코드
}