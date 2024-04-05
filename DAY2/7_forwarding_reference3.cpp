// 6_forwarding_reference1 - 아주 아주 중요!!
void f1(int&  r) {}
void f2(int&& r) {}

// 함수 인자로 
// int&  : 
// int&& : 
// T&    : 
// T&&   : 

template<typename T> void f3(T& a)
{
}

int main()
{
	int n = 3;
	
	// 1. 명시적으로 템플릿 인자(타입)를 전달하는 경우
	f3<int>(?);		// T = ?		T& = ?		f3( ? a)
	f3<int&>(?);	// T = ?		T& = ?		f3( ? a)
	f3<int&&>(?);	// T = ?		T& = ?		f3( ? a)

	// 2. 템플릿 인자를 전달하지 않은 경우.
	f3(3);
	f3(n);
}


template<typename T> void f4(T&& a)
{
}
