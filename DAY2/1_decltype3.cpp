// decltype 규칙 2.
int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	int* p = &n;

	int x[3] = { 1,2,3 };

	decltype(p)		d1; // 규칙 1. 적용
						// int* d1
	
	// 규칙 2. ()안의 표현식이 "심볼의 이름외에 연산자등의 다른 코드와"
	//	같이 있을때
	// decltype(exp)
	// exp 의 최종 결과가 =의 왼쪽에 올수 있으면 "참조 타입"
	//                             올수 없으면 "값 타입"
	decltype(*p)	d2; // "*p = 10" 이 가능. int& d2
	decltype(x[0])	d3; // "x[0] = 10" 가능.  int& d3

	decltype(n) d; // "n = 10" 이 가능하지만, 심볼의 이름만 있으므로 규칙 1
					// int& 가 아닌 int d
					

	decltype(n + n) d4; // "n+n = 10" 안된다. lvalue 가 될수 없는 표현식
						// int n4

	n = 3;	
	int ret = ++n * ++n;
	++n = 10; // ok.. 에러 아님.
	n++ = 10; // error. 

	decltype(++n)   d5; // int& d5   초기값 문제로 에러						
						
	decltype(n++)   d6; // int d6
}
// 사용자 정의 타입이 아닌 int 에 대해서는 연산자 재정의가 안되지만
// 된다고 가정하고 생각해 봅시다.
int& operator++(int& n)
{
	n = n + 1;
	return n;
}
// 후위형 ++은 전위형과 구별하기 위해 사용되지 않지만, 2번째 인자로 int 가 있어야합니다.
int operator++(int& n, int )
{
	int temp = n;
	n = n + 1;
	return temp;
}

