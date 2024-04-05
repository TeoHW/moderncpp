// 람다표현식이 만드는 "임시객체"를 클로저(Closure)라고도 합니다.
class ClosureType
{
	int& v1, v2;
public:
	ClosureType(int& a, int& b):v1{a},  v2{b}{}
	inline int operator()(int a, int b) const { return a + b; }

};

int main()
{
	int a = 10, b = 20;
	int c = ClosureType{a, b}(1,2);


}












