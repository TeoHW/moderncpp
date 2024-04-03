// 6_forwarding_reference1 - 아주 아주 중요!!
void f1(int&  r) {}
void f2(int&& r) {}

// 함수 인자로
// int&   : int 타입의 lvalue 만 전달 가능합니다.
// int&&  : int 타입의 rvalue 만 전달 가능합니다.
// T&     : 임의(모든) 타입의 lvalue 만 전달 가능합니다.
// 


template<typename T> void f3(T& a)
{
}

int main()
{
	int n = 3;

	// 1. 타입인자를 명시적으로 전달하는 경우를 먼저 생각해 보세요
	f3<int>(n);		// T = int	 T& = int&		f3(int& a)
	f3<int&>(n);	// T = int&	 T& = int& &	f3(int& a)
	f3<int&&>(n);	// T = int&& T& = int&& &	f3(int& a)

	// 2. 사용자가 타입인자를 명시적으로 전달하지 않으면
	// => 컴파일러는 함수 인자를 보고 인자를 받을수 있도록 타입을 추론합니다.
	f3(3); // 3은 int 타입. T = int, int&, int&& 중 어떠한 타입으로 결정해도
			// 3은 받는 함수는 만들수 없다. 따라서 error
	f3(n);  // ok. T = int 결정
}











template<typename T> void f4(T&& a)
{
}
