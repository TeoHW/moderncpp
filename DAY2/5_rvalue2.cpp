// 핵심 : rvalue, lvalue 의 개념은 
//       변수(객체)에 부여되는 개념이 아닌
//       표현식(expression) 에 부여 되는 개념
// expression : 한개의 값으로 계산되는 코드 집합
// statement  : 실행되는 단위, 문장  ; 으로 끝나는 한줄의 문장
// result	  : expression의 결과로 나오는 한개의 값
// 				두개의 특징, 
//				1. type
//				2. value category

int main()
{
	int n = 0;
	// expression  : 한개의 값으로 계산되는 것
	n;
	n*3;
	n*3+2;
	// 모두 결과가 하나로 나오기 때문에 expression, 결과는 result
	// 위 코드의 결과 result
	// type : int
	// value category : rvalue expression

	(n+n) = 10; // (n+n) : rvalue
	(n = 10) = 20; // (n = 10) : lvalue

	const int cc = 10;
	cc = 20; // error
	// cc는 lvalue expression이나 read only lvalue이다. (immutable lvalue expression)

}
