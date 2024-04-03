// 3_함수객체4 -  137 page 제일 윗부분내용

       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	int n1 = Add1(1, 2); // 호출
						 // 인자 2개를 약속된 장소(레지스터)에 넣고
						 // 함수로 이동(call Add1)

	int n2 = Add2(1, 2); // 기계어 코드 치환, 
						// mov eax, 2
						// add eax, 1
						// mov n2, eax


	int(*f)(int, int) = &Add2;

//	if ( 사용자입력 == 1 ) f = &Add1;

	f(1, 2);  // 호출 ?  치환 ?
}

// 1. 인라인 치환은 "컴파일 시간" 문법 입니다.
// 2. 인라인 함수라도 함수 포인터에 담아서 호출하면 치환될수 없습니다.
