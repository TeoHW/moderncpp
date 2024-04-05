#include <iostream>

int hoo(int a) { return -a; }
void goo(int a, int b, int c) {}

template<typename ... Types> void foo(Types ... args)
{
	// Types : int, int, int
	// args  : 1,   2,   3

	goo( args ); // error. pack 자체를 함수 인자로 보낼수 없습니다.

	// pack expansion : pack 안의 요소를 , 를 사용해서 나열하는 것
	//					"pack_name..." : e1, e2, e3, ....
	//					"pack_name 을사용하는 패턴..." : e1패턴, e2패턴, e3패턴

	goo( args...); 		// goo(1, 2, 3)

	goo( (++args)...);	// goo(++e1, ++e2, ++e3)   

	goo( hoo(args...)); // ?
}


int main()
{
	foo(1, 2, 3);
}
