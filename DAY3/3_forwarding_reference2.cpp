// 91 page
int main()
{
	int n = 10;


	int *p = &n;
	int* *pp = &p;	// C언어에서는 포인터의 포인터를 만들 수 있다. 이중 포인터

	int& r = n;
	int& &rr = r;	// error.
					// 레퍼런스의 레퍼런스를 직접 코드로 작성할 수 없습니다.

	// 하지만 타입추론이나, alias사용시 "레퍼런스의 레퍼런스" 허용
	using LREF = int&; 
	using RREF = int&&;

	// reference collapsing
	// 양쪽이 && 2개일때만 &&로 추론됨
	LREF& r3 = n ;	// int&		& => int &
	RREF& r4 = n ;	// int&&	& => int &
	LREF&& r5 = n ;	// int&		&&=> int &
	RREF&& r6 = 3;	// int&&	&&=> int&&
}

template<typename T> void foo(T a)
{
	T& r = a;
}





