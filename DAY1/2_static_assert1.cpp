// 7page
// 64bit 전용프로그램을 작성했다.

// static_assert : 조건을 만족하지 않으면 컴파일을 중단하고
//				   메세지 출력
static_assert( sizeof(int*) == 8, "error not 64bit");

int main()
{
	int n = 0;
	int* p = &n;
}
