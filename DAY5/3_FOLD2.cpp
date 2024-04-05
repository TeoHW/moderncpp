#include <iostream>

template<typename T> void printv(const T& a)
{
	std::cout << a << std::endl;
}

template<typename ... Types>
void Show(Types ... args)
{
	// I        op ... op pack
//	( std::cout << ... << args  );
	// ((((std::cout << e1) << e2 ) << e3 )

	// pack 의 이름뿐 아니라 pack 을 사용하는 패턴도 가능
	(printv(args), ... );
}

int main()
{
	Show(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
}



