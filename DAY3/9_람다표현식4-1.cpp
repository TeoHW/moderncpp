#include <functional> // std::less<> 가 이안에 있습니다.

template<typename T>
void sort(T pred)
{
}

int main()
{
	// 아래 코드를 평가해 보세요.. 좋은 코드일까요 ?
	sort( [](int a, int b) { return a < b;} );
	sort( [](int a, int b) { return a < b;} );
	sort( [](int a, int b) { return a < b;} );
}