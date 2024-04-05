// 핵심 : rvalue, lvalue 의 개념은 
//       변수(객체)에 부여되는 개념이 아닌
//       표현식(expression) 에 부여 되는 개념

// expression : 한개의 값으로 계산되는 코드 집합
// statement  : 실행되는 단위. ; 으로 끝나는 한줄의 문장

// result : expression 의 결과로 나오는 한개의 값

// result 의 2가지 특성
// 1. type
// 2. value category ( rvalue, lvalue )

int main()
{
	int n = 1;

	n * 3 + 2;  // result : 5
			    // result type : int
				// result value category : rvalue expressioon

	(n + n) = 10; // error. "n+n" 은 rvalue expression

	(n = 10) = 20; // ok. "n=10" 의 최종 결과로 나오는 값은 "n"!!
					// 사용자가 할당한 이름이 있는 메모리 공간
					// 즉, lvalue expression

	n = 10;	// "n" 자체도 하나의 값으로 계산되는 표현식!!!
			// lvalue expression

	const int c = 10;
	c = 20; // ??error..
			// c 는 lvalue expression ? rvalue expression ?
			// 이름도 있고, 주소도 구할수 있다.
			// immutable(read only) lvalue expression
}
