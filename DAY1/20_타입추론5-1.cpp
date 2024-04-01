int main()
{
	int x[3] = {1,2,3};

	// 아래 코드에서 auto 와 a1의 타입을 생각해 보세요

	auto  a1 = x;	// 1. int a1[3] = x; 으로 생성되면 error.
					// 2. int* a1 = x;   으로 생성되면 ok

	auto& a2 = x;	// int (&a2)[3] = x; 으로 생성되면 에러아님.
					// auto : int[3]  a2 : int(&)[3]

	// 정리. auto(T) 로 배열을 가리키면
	// 값 타입이면 : auto 는 포인터로 결정되고
	// 참조타입이면 : auto 는 배열 타입으로 결정
}