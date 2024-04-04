#include <stdio.h>
// 특정 변수의 포인터 변수를 만드는 방법
// 1. 변수의 주소를 구하려면 "&변수이름"
// 2. 포인터 변수를 만들려면 "변수와 동일하게 선언후, 이름앞에*" 붙이면됩니다.
// 3. 단, 배열 포인터나 함수 포인터는 우선순위 문제로 () 필요
int main()
{
	int n = 0;
	int *p1 = &n;

	double d = 0;
	double *p2 = &d;

	int x[3] = {1,2,3};

	// x의 주소를 담는 포인터 변수 p3 를 만들어 보세요
	int (*p3)[3] = &x;

	// 포인터는 +1 을 하면 대상체 크기 만큼 증가합니다
	// p3가 가리키는 타입은 "int" 가 아니라 "int[3]" 입니다.
	// 즉, 대상체의 크기는 "12" 입니다.

	printf("%p, %p\n", p3, p3 + 1); // 1000, 1012
}