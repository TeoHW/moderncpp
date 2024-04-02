// 1_초기화11 - 65 page..
// aggregate initialization

// aggregate type
// => 생성자가 없어도 {}로 초기화 가능한 타입
// => C의 구조체, 공용체, 배열

struct Point
{
	int x, y;

//	Point()             : x(0), y(0) {}	// 1
//	Point(int a, int b) : x(a), y(b) {}	// 2

//	void foo() {} // 이 멤버가 aggregate type 입니다.
//	virtual void foo() {} // 가상함수가 있으면 aggregate 아닙니다.
//	Point() {}	// 사용자가 만든 생성자가 있어도 aggregate 아닙니다.

	Point() = default; // 이렇게 하면
						// C++17 까지는 aggregate 
						// C++20 부터는 aggregate 아님.
};

int main()
{
	Point p1;	
	Point p2 = {1, 2};
}
