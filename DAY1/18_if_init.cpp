// 18_if_init    50 page

int foo() { return 100; }

int main()
{
	int ret = foo();

	if (ret == 0)
	{
	}
	// C++17 부터 위 코드를 아래처럼 사용가능합니다
	if( int ret2 = foo(); ret2 == 0)
	{
	} // <== 여기서 ret2 파괴

}
