// 14_override  - 44 page

class Base
{
public:
	virtual void foo() {}
	virtual void goo(int a) {}
	virtual void hoo() {}
};

class Derived : public Base
{
public:
	// 가상 함수 재정의시 실수(오타)
	// => 컴파일러는 에러가 아니라, 새로운 가상함수를 만들었다고 생각하게됩니다.
//	virtual void fooo() {}
//	virtual void goo(double a) {}
//	virtual void hoo() const  {}

	// 위 문제가 너무 심각해서.. C++11 에서 override 키워드 도입
	// => 새로운 함수가 아니라, 기반 클래스 함수를 override 한다고 알려주는것
	// => 오타 등이 있으면 컴파일 에러
	virtual void fooo()        override {}
	virtual void goo(double a) override {}
	virtual void hoo() const   override {}	
};


int main()
{
}
