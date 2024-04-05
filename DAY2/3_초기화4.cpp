// 58 page
class Vector
{
	int sz;
public:
	// explicit 생성자 - C++98
	// 생성자를 복사 초기화로 사용할 수 없다. 
	// 직접 초기화만 가능하다.
	explicit Vector(int s) : sz(s) {}
};
void foo(Vector v) {} 				  

int main()
{
	// 인자가 한개인 생성자가 있으면 아래의 표기법이 가능합니다.
	Vector v1(10); 
	Vector v2 = 10; 
	Vector v3{ 10 };
	Vector v4 = { 10 };

	//----------------
	foo(10); // 함수의 인자 전달 과정은 복사 초기화 과정과 같다. 
	// 즉, Vector v2 = 10; 과 같이 foo(Vector tmp = 10)과 같다.
	// 생성자에 explicit가 붙는 순간 복사 초기화는 에러다. 

	foo({10});
	
	
}







