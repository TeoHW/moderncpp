// 람다표현식이 만드는 "임시객체" 를 "closure" 라고도 합니다.

class ClosureType
{
public:
	inline int operator()(int a, int b) const { return a + b; }

	// 람다표현식 사용시 함수 포인터로 변환하는 코드를 사용하면
	// 아래 와 같은 도움함수가 추가
	inline static int helper(int a, int b)  
	{ 
		return ClosureType::operator()(a, b);
	}


	using FP = int(*)(int, init);

	// 변환연산자 함수 : 객체가 다른 타입으로 변환이 필요 할때 호출
	operator FP() { return &ClosureType::helper ; }
};

int main()
{
	int(*f)(int, int) = ClosureType{};
						// 객체.operator 함수포인터()






//	auto f = [](int a, int b) {return a + b; };
//	int(*f)(int, int) = [](int a, int b) {return a + b; };
}












