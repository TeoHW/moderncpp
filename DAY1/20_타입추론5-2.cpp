template<typename T> void foo(T  a, T  b) {}
template<typename T> void goo(T& a, T& b) {}

int main()
{
	// 왜 아래 같은 현상이 있을까요 ?
	foo("apple", "banana"); // ok
	goo("apple", "banana"); // error
}