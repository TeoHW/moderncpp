// 7_가변인자템플릿1 - 225 page

// 가변인자 함수 템플릿 

// 인자가 한개인 함수 템플릿 : 인자가 한개인 함수를 생성하는 도구;
template<typename T> void foo(T a) {}

// ...의 위치가 중간에 있는 것을 확인해라
// 임의 갯수의 인자를 가지는 함수, 모든 케이스 대응 가능, void도 가능
template<typename ... Ts> void foo(Ts ... args) {}

int main()
{
	int arr[] = {1,2,3,4};
	foo(1);
	foo(1, 3.4);
	foo(1, 3.4, "A");
	foo(arr, 1, 2, 3);
}
