struct Test
{
	static int data;
	typedef int DWORD; // using DWORD = int;
};
int Test::data = 0;
int p = 0;

template<typename T> void foo(T a)
{
	// 아래 코드에서 * 의 의미를 생각해 보세요
//	Test::data  * p; 	// 곱하기 의미
//	Test::DWORD * p; 	// 포인터 변수 선언

	// "클래스이름::이름" 에서 "이름"은 "값" 또는 "타입"일수 있습니다.
	// 값   : static 멤버 데이타, enum 상수
	// 타입 : using, typedef 등

	// dependent name : 템플릿 인자에 의존해서 꺼내는 이름
	//				=> 컴파일러는 무조건 "값" 으로 해석합니다.
	T::data  * p; 	// ok
//	T::DWORD * p; 	// error
	typename T::DWORD * p; 	// ok. 컴파일러에게 DWORD가 "값"이 아닌 "타입"
							// 이라고 알려 주는것
}
int main()
{
	Test t;
	foo(t);
}



