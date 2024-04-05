class Sample
{
public:
	// 동일이름의 상수 멤버 함수와 비상수 멤버 함수를 제공하려면

	// 1. C++23 이전까지의 멤버 함수(implicit object parameter) 기술로
	void foo()       { std::cout << "foo\n";}
	void foo() const { std::cout << "foo const\n";}

	// 2. C++23 이후의 explicit object parameter 사용
	void goo(this Sample& self) { std::cout << "goo\n";}
	void goo(this const Sample& self) { std::cout << "goo const \n";}

	// const 를 붙이는 것이 함수 인자화 되었으므로
	// template 사용하면 자동 추론 가능합니다.
	// => 즉, 아래 코드가 위 처럼 "상수버전", "비상수버전" 을 자동생성합니다
	// => 물론, 동일한 구현
	template<typename T>
	void hoo(this T& self) {  std::cout << "hoo\n";}
};

int main()
{
	Sample s;
	const Sample cs;

	s.foo();
	cs.foo();

	s.goo();
	cs.goo();

	s.hoo();
	cs.hoo();	
}