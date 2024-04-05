#include <iostream>

template<typename T> void printv(const T& a)
{
	std::cout << a << std::endl;
}
template<typename ... Types> void foo(Types ... args)
{
//	printv(args...); // printv(1, 2, 3) 이므로 error

//	printv(args)...; // printv(1), printv(2), printv(3) 의 의도 인데
					 // error
	// 이번 소스의 핵심 
	// pack expansion 은
	// 1. 함수 인자나 템플릿 인자
	// 2. {} 초기화 구문에서만 가능합니다

	// 예전에는 아래처럼해서 printv 에 args 를 보내기도 했습니다
	// => 지금은 C++17 fold 로 하면 됩니다.
	int x[] = { (printv(args), 0)... };
		//    { (printv(1), 0), (printv(2), 0), (printv(3), 0) };

}


int main()
{
	foo(1, 2, 3);
}

