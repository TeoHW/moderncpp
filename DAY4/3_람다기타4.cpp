class ClosureType
{
	int v1;
	int v2;
public:
	inline int operator()(int a, int b) const { return a + b + v1 + v2; }

	inline static int helper(int a, int b)  
	{
//		return a + b + v1 + v2; // 이렇게 하면 static 에서 
								// 멤버 데이타 접근 안됨
		ClosureType ct;
		return ct(a, b);
	}
	using FP = int(*)(int, int);
	operator FP() { return &ClosureType::helper ; }
};

int main()
{
	//	int v1 = 0, v2 = 0;

	// #1. 캡쳐한 람다표현식은 아래 처럼 v1, v2 를 전달하게 됩니다.
	// #2. 그런데 위의 helper 는 static 이므로 멤버 데이타 v1, v2 를 
	//     접근할수 없습니다. 
	// #3. 그래서 캡쳐한 람다 표현식은 함수 포인터 변환 안됩니다.
	int(*f)(int, int) = ClosureType{v1, v2};
						// 객체.operator 함수포인터()



//	int(*f)(int, int) = [v1, v2](int a, int b) {return a + b+v1+v2; };
}












