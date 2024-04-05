// 아래 코드가 왜 에러인지 생각해 보세요 ?
/*
class A
{
	int data;
public:
	void foo()
	{
		*data = 10; // error
	}
};
int main()
{
	A a;
}
*/
template<typename T>
class A
{
	T data;
public:
	void foo()
	{
		*data = 10; 
	}
};
int main()
{
	A<int> a;

	a.foo(); // 이렇게 멤버 함수를 사용하는 코드가 있어야
			// "template => C++ 클래스"를 생성할때 C++클래스에도 foo가
			// 생성됩니다.
			// 이 코드가 있으면 컴파일 에러, 없으면 에러 아님.
}
// "지연된 인스턴스화"라는 개념. 사용된 멤버 함수만 "C++클래스"에 추가