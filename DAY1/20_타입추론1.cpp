// 20_타입추론1 - 69 page
// 타입 추론 문법

int main()
{
	int x[3] = { 1,2,3 };

	auto a = x[0]; // int a = x[0]

	const int c = 0;

	auto a1 = c; // const int a1 = c; // X
				 // int a1 = c;       // O
	
	// 타입 추론 : 표현식을 보고 컴파일러가 타입을 결정하는 것
	// 1. template
	// 2. auto
	// 3. decltype

	// 1, 2 는 동일 규칙
	// 3은 다른 규칙
}



