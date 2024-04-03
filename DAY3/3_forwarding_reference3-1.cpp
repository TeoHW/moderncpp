// 함수 인자로
// int&   : int 타입의 lvalue 만 전달 가능합니다.
// int&&  : int 타입의 rvalue 만 전달 가능합니다.
// T&     : 임의(모든) 타입의 lvalue 만 전달 가능합니다.
// T&&    :


template<typename T> void f4(T&& a)
{
}
int main()
{
	int n = 3;

	// 1. 타입인자를 명시적으로 전달하는 경우를 먼저 생각해 보세요
	f4<int>(n);		// T = int	 T& = int&		f4(int& a)
	f4<int&>(n);	// T = int&	 T& = int& &	f4(int& a)
	f4<int&&>(n);	// T = int&& T& = int&& &	f4(int& a)

	// 2. 사용자가 타입인자를 명시적으로 전달하지 않으면
	// => 컴파일러는 함수 인자를 보고 인자를 받을수 있도록 타입을 추론합니다.
	f4(3);
	f4(n);
}