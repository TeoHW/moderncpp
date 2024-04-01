template<typename T> void foo(T  a, T  b) {}
template<typename T> void goo(T& a, T& b) {}

int main()
{
	// 왜 아래 같은 현상이 있을까요 ?
	foo("apple", "banana"); // ok
	goo("apple", "banana"); // error

	// "apple"  : const char[6]
	// "banana" : const char[7]
	// => 위 2개의 문자열은 "다른 타입" 입니다.

	foo("apple", "banana");	
		// => 인자는 배열이지만 값타입으로 받으므로 포인터로 받게 됩니다.
		// => const char[6] => const char*
		// => const char[7] => const char*
		// => 이므로 결국 2개는 같은 타입으로 전달됩니다.
		// => 따라서 ok!!

	goo("apple", "banana");	
		// => 참조 타입(T&) 로 받게 되므로
		// => 배열을 보내면 배열로 받게 됩니다.
		// => "apple", "banana" 는 다른 타입인데
		// => T a, T b 즉, 같은 타입을 요구하므로 error
}