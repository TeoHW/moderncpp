// 8_nullptr - 29page

int main()
{
	// C++98 시절
	int  n1 = 0; // 0 은 정수입니다.
	int* p1 = 0; // 0 은 정수지만 포인터로 암시적 변환이 됩니다.
				 // 단, 0만 가능하고 다른 정수는 안됩니다.
//	int* p2 = 10; // error. 정수인 10을 포인터에 담을수 없습니다.

	// C++11 이후라면 포인터 초기화시 0사용하지 말고, nullptr 사용하세요
	int* p3 = nullptr; // good
	int* p4 = 0;       // bad
}
