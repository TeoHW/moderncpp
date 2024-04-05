#include <stdio.h>

int main()
{
	int n1 = 0;
	int* p1 = &n1;

	n1 = 10;
	// p1 = 10; // error - 포인터에 상수값을 넣으면 안된다. 
	*p1 = 10; // 가리킨 대상의 값을 바꾸기


	int x[3] = {1, 2, 3};
	int (*p2)[3] = &x;

	**p2 = 10;
	*(*p2 + 1) = 20;
	*(*p2 + 2) = 30;
	for(int i = 0; i < 3; i++){
		printf("%d ", x[i]);
	}
	printf("\n");
	(*p2)[0] = 100;
	(*p2)[1] = 200;
	(*p2)[2] = 300;
	for(int i = 0; i < 3; i++){
		printf("%d ", x[i]);
	}
	printf("\n");

	
}