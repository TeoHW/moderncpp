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
	// => 멤버 데이타 초기화를 위해 Derived()의 생성자를 만들어야 하는 경우가 대부분

	// Derived 에서 멤버 데이타를 추가하지 않고, 멤버 함수만 추가 했다면
	// => 생성자를 만들이유가 거의 없습니다.
public:

	void foo() {}

	// C++에서는 생성자는 상속 되지 않는 문법이 있지만
	// C++11 부터 아래 처럼 사용하면 생성자도 상속됩니다.
	using Base::Base; // using 클래스이름::생성자이름;

	// 멤버 데이타를 추가하지 않고, 멤버 함수 정도만 추가할때
	// => 기반 클래스의 생성자를 그대로 사용할수 있어서 아주 편리한 문법
};

int main()
{
	// 아래 2줄을 생각해 보세요
	Derived d1;
	Derived d2(5);
}
