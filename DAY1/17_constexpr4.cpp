// 17_static_if - 51 page

template<typename T> void foo(T a)
{
	// 아래 코드는 에러가 있을까요 ? 없을까요 ?
	// if : 실행시간 조건문
//	if (false) 
//		*a = 10; 

	// if constexpr : 컴파일 시간 조건문(C++17)
	//				  조건이 false 라면 "템플릿 인스턴스화"에 포함 안됨
	// 템플릿 인스턴스화 : 템플릿으로 부터 실제 함수는 만드는 과정
	if constexpr ( false )
		*a = 10;
}
int main()
{
	foo(0); 
}

