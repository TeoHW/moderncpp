// decltype 타입 추론 - 71page
int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	int* p = &n;

	// 규칙 1. () 안에 id-expression(심볼의 이름만) 이 있을때
	// => 심볼의 선언과 동일한 타입으로 결정 		   
	decltype(n) d1; // int d1
	decltype(r) d2; // int& d2    		초기값 없으므로 error
	decltype(c) d3; // const int d3		초기값 없으므로 error
	decltype(p) d4; // int* d4

	// 아래 2개 차이점 잘 기억해 두세요
	auto a = r;    // int a = r;
	decltype(r) d; // int& d 

}
