// 4_rvalue - 87 page
int x = 0;
int  foo() { return x; }
int& goo() { return x; }

// lvalue : 등호의 양쪽에 올 수 있다. 이름과 값이 있다.단일식을 넘어서 사용 가능
// 			&연산자로 주소를 구할 수 있다. 참조를 반환하는 함수
// rvalue : 등호의 오른쪽만, 이름이 없고 값만 가짐
//			& 연산자로 주소를 구할 수 없다. 값을 반환하는 함수
//			10, 3.5같은 literal, 임시객체


int main()
{
	int v1 = 10, v2 = 10;
	v1 = 20;
	10 = v1;
	v2 = v1;
	int* p1 = &v1;
	int* p2 = &10; 
	foo() = 30;	// 값을 리턴했기 때문에 rvalue는 lvalue가 안된다
	goo() = 40;
}









