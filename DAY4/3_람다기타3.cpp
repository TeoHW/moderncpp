// 람다표현식이 만드는 "임시객체"를 클로저(Closure)라고도 합니다.
class ClosureType
{
public:
	inline int operator()(int a, int b) const { return a + b; }

	// operator() 연산자 앞에 static을 붙이면 class의 멤버함수의 주소를 구할 수 있지만
	// c++ 표준에서는 operator()앞에 static을 붙이지 못하도록 되어 있다. 
	// 람다표현식 사용시 함수 포인터로 변환하는 코드를 사용하면
	// 아래 와 같은 도움함수가 추가
	inline static int helper(int a, int b) {
		ClosureType ct;
		return ct.operator()(a,b);
	}
	
	using FP = int(*)(int, int);
	// 변환 연산자 함수 : 객체가 다른 타입으로 변환이 필요 할 때 호출
	operator FP() { return &ClosureType::helper; }
};

int main()
{


	// auto f = [](int a, int b) {return a + b; };
	// int (*f)(int, int) = [](int a, int b) {return a + b; };
	int (*f)(int, int) = ClosureType{}; // 객체인데 함수포인터에 담아야 한다면?
										// 객체.operator() 를 찾는다
	int a = ClosureType{}(1,2);


}












