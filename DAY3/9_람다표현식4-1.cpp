#include <functional> // std::less<> 가 이안에 있습니다.

template<typename T>
void sort(T pred)
{
}

int main()
{
	// 아래 코드를 평가해 보세요.. 좋은 코드일까요 ?
	// 문제점 : sort() 함수가 3개 생성됩니다.
	/*
	sort( [](int a, int b) { return a < b;} );
	sort( [](int a, int b) { return a < b;} );
	sort( [](int a, int b) { return a < b;} );
	*/

	// 동일한 람다 표현식이 여러번 사용되면 되도록 auto 변수에 담아서 사용하세요
	auto cmp = [](int a, int b) { return a < b;};

	sort( cmp );
	sort( cmp );
	sort( cmp );
}