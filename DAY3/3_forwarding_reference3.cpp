// 6_forwarding_reference1 - 아주 아주 중요!!
void f1(int&  r) {}
void f2(int&& r) {}

// 함수 인자로
// int&   : lvalue 만 전달 가능합니다.
// int&&  : rvalue 만 전달 가능합니다.
// T&     : ?
// 


template<typename T> void f3(T& a)
{
}

int main()
{
	int n = 3;

	// 1. 타입인자를 명시적으로 전달하는 경우를 먼저 생각해 보세요
	f3<int>(?);		// T =		T& = 		f3(? a)
	f3<int&>(?);	// T =		T& = 		f3(? a)
	f3<int&&>(?);	// T =		T& = 		f3(? a)
}











template<typename T> void f4(T&& a)
{
}
