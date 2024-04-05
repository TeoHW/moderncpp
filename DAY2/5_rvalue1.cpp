// 4_rvalue - 87 page
int x = 0;
int  foo() { return x; }
int& goo() { return x; }

// lvalue : 등호의 양쪽에 올수 있다.
//			이름과 값이 있다.
//			단일식을 넘어서 사용가능
//			& 연산자로 주소를 구할수 있다.
//			참조를 반환하는 함수

// rvalue : 등호의 오른쪽에만 올수 있다.
//			이름이 없고, 값만 가진다.
// 			& 연산자로 주소를 구할수 없다.
//			값을 반환하는 함수
//			10, 3.4 같은 literal, 임시객체
int main()
{
	int v1 = 10, v2 = 10;
	
	v1 = 20;  // ok		v1 : lvalue
	10 = v1;  // error  10 : rvalue 
	v2 = v1;

	int* p1 = &v1; // ok
	int* p2 = &10; // error

	foo() = 10; // error
	goo() = 10; // ok
}









