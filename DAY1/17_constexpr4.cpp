// 17_static_if - 51 page

template<typename T> void foo(T a)
{
	// 아래 코드는 에러가 날까?
	if constexpr (false){
		*a = 10;
	}
	// if (false)
	// 	*a = 10;
}
int main()
{
	foo(0); 
}

