// 58 page
class Vector
{
	int sz;
public:
	// explicit 생성자 - C++98 시절 부터 있던 문법
	// => 생성자를 복사 초기화로 사용할수는 없고
	//    직접 초기화만 사용 가능하다.
	explicit Vector(int s) : sz(s) {}
};
void foo(Vector v) {} 				  

int main()
{
	// 인자가 한개인 생성자가 있으면 아래의 표기법이 가능합니다.
	Vector v1(10); 		// C++98 direct init
	Vector v2 = 10; 	// C++98 copy   init
	Vector v3{ 10 };	// C++11 direct init
	Vector v4 = { 10 }; // C++11 copy   init

	//----------------
	foo(10); // 함수의 인자 전달은 복사 초기화 입니다.
			 // Vector v = 10
}







