// 함수 인자로
// int&   : int 타입의 lvalue 만 전달 가능합니다.
// int&&  : int 타입의 rvalue 만 전달 가능합니다.
// T&     : 임의(모든) 타입의 lvalue 만 전달 가능합니다.
// T&&    : 임의(모든) 타입의 lvalue 와 rvalue 를 모두 받을수 있습니다.

// 모두 받는 다는 의미는
// => 받을수 있는 함수를 "생성" 한다는 의미 입니다.

// int 의 lvalue(n) 전달하면  T = ?   T&& = ?    f4(? )
// int 의 rvalue(3) 전달하면  T = ?   T&& = ?    f4(? )


template<typename T> void f4(T&& a) {}

int main()
{
	int n = 3;

	// 1. 타입인자를 명시적으로 전달하는 경우를 먼저 생각해 보세요
	f4<int>(3);		// T = int	 T&& = int&&	f4(int&& a)
	f4<int&>(n);	// T = int&	 T&& = int& &&	f4(int&  a)
	f4<int&&>(3);	// T = int&& T&& = int&& &&	f4(int&& a)

	// 2. 사용자가 타입인자를 명시적으로 전달하지 않으면
	// => 컴파일러는 함수 인자를 보고 인자를 받을수 있도록 타입을 추론합니다.

	f4(n);  // n은 int 타입입니다.
			// T = int  로 추론하면 f4(int&&) 가 생성되어서 n 을 받을수 없음.
			// T = int& 로 추론하면 f4(int& ) 가 생성되어서 n 을 받을수 있음
	
	f4(3);	// T=int 또는 T = int&& 로 추론하면 3을 받을수 있습니다.
			// T=int 로 결정됩니다.
	
}