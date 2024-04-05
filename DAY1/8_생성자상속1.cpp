// 7_생성자상속1 - 26page
class Base
{
	int value;
public:
	Base()      : value(0) {}
	Base(int n) : value(n) {}
};
class Derived : public Base
{
	// Derived 에서 멤버 데이타를 추가한다면 ?
	// => 멤버 데이터 초기화를 위해 Derived()의 생성자를 만들어야 하는 경우가 대부분
	// Derived에서 멤버 데이터를 추가하지 않고, 멤버 함수만 추가했다면, 생성자를 만들 이유가 거의 없음
public:
	void foo(){}
	//c++에서는 생성자는 상속되지 않는 문법이 있/지만
	// 11부터 아래처럼 사용하면 생성자도 상속됩니다. 

	using Base::Base;
};

int main()
{
	// 아래 2줄을 생각해 보세요
	Derived d1;
	Derived d2(5);
}
