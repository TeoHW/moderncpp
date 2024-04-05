int main()
{
	int  n1 = 3.4; 	// 경고는 발생할수 있지만 컴파일 가능
					// 하지만, 좋지 않은 코드 입니다.
	char c1 = 500; 	// 에러 아니지만 overflow 발생.

	// prevent narrow - 56 page 중간부분
	int n2{ 3.4 };  // error. 데이타 손실이 발생하면 에러
	char c2{ 500 }; // error. 오버플로우 나와도 에러

}
