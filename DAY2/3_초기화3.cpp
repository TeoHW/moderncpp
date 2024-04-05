int main()
{
	int  n1 = 3.4; // ok, 경고는 발생할 수 있지만 컴파일 가능
	char c1 = 500; // ok, overflow

	// prevent narrow - 56 page 중간부분
	int n2{ 3.4 };  // 에러 발생
	char c2{ 500 }; // 에러 발생

}
