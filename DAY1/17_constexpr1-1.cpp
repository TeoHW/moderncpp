// 컴퓨터 프로그램에서 "상수" 라는 용어가 가진 2가지 의미

// 1. 값을 변경할수 없는 것 : immutable, readonly 의미
//      				=> C# : readonly
//						=> C++ : const

// 2. 컴파일 시간에 값을 알수 있는것 : constant expression
//						=> C# : const
//						=> C++ : constexpr ( C++11 부터 )
// 위처럼 분리해야 하는 이유
// => C++ 코드의 특정 위치는 "constant expression" 이어야
//    하는 경우가 있다.(템플릿 인자등)
int main()
{
	int n = 10;
	const int c1 = n;	// ok
	const int c2 = 10;	// ok

	constexpr int c3 = n;	// error
	constexpr int c4 = 10;	// ok
}