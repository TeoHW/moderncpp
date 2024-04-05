// decltype 타입 추론 - 71page
int main()
{
	int n = 10;
	int& r = n;	// r === n
	const int c = 10;
	int* p = &n;

	auto a = r; // 

	// 규칙1. ()안에 id-expression(심볼의이름) 만 있을 때
	// => 심볼(변수, 함수..) 선언만 보고 선언과 똑같은 타입으로 추론

	decltype(n) d1; // int d1;
	decltype(r) d2; // int& d2; // 초기값이 없어서 에러
	decltype(c) d3; // const int d3; // 초기값 없어서 에러
	decltype(p) d4; // int* d4;

	auto a = r; // r을 보고 const, ref, volatile제거, .. int a = r;
	decltype(r) d2 = r; // int& d2 = r;
}
