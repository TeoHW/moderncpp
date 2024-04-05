// 7_가변인자템플릿1 - 225 page

// 인자가 한개인 함수 템플릿 : 인자가 한개인 함수를 생성하는 도구
// 가변인자 함수 템플릿      : 임의 갯수의 인자를 가지는 함수를 생성하는 도구
// 가변인자 함수 템플릿
template<typename ... Ts> void foo(Ts ... args) {}
								
int main()
{
	foo();
	foo(1);
	foo(1, 3.4);
	foo(1, 3.4, "A");  	// Ts   : int, double, const char*
						// args : 1,   3.4,    "A"
}
