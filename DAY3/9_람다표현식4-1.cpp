#include <iostream>

template<typename T>
void sort(T pred)
{
}

int main(){

	// 아래 코드를 평가해 보세요.. 좋은 코드일까요?
	sort([](int a, int b){return a < b;});
	sort([](int a, int b){return a < b;});
	sort([](int a, int b){return a < b;});
	// 위 코드는 동일한 비교정책을 가지고 있지만 람다표현식을 썼기 때문에 sort가 3개 생성되어 비효율코드이다

	auto cmp = [](int a, int b){return a < b;};
	sort(cmp);
	sort(cmp);
	sort(cmp);
	sort(cmp);
}