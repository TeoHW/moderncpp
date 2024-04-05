// 7page
// 64bit 전용프로그램을 작성했다.
// static_assert : 조건을 만족하지 않으면 컴파일을 중단하고 메시지 출력
// 컴파일시에만 사용하므로
// 메모리 증가, 실행성능에는 아무 영향이 없음
// 많이 사용할수록 좋음
static_assert(sizeof(int*) == 8, "error not 64bit");

int main()
{
	int n = 0;
	int* p = &n;
}
