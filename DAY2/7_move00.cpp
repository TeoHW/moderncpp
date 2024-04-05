// 복사생성자 모양을 생각해 봅시다.
class Point
{
	int x, y;
public:
	Point() {}				// 1
	Point(int a, int b) {}	// 2

	// 컴파일러가 제공하는 복사 생성자
//	Point(const Point& other) : x{other.x}, y{other.y} {} 

	// 1. call by value 버전의 복사 생성자
	// => 복사 생성자가 무한히 호출되는 표기법
	// => 컴파일 에러
	// => 복사 생성자는 1번째 인자가 value 가 될수 없다.
//	Point(Point other) : x{other.x}, y{other.y} {} 


	// #2. call by non-const lvalue reference
	// => 컴파일 가능.
	// => rvalue(임시객체)를 받을수 없다.
	// => Point ret = foo() 코드에서 에러!!!
//	Point(Point& other) : x{other.x}, y{other.y} {} 

	// 결론 : 복사 생성자는 lvalue, rvalue(임시객체) 모두 받을수 있어야 한다.
	// C++98 시절 : lvalue, rvalue 를 복사본 없이 모두 받으려면
	//				const lvalue reference 이어야 한다.
	Point(const Point& other) : x{other.x}, y{other.y} {} 
};

Point foo()
{
	Point pt{1,2};
	return pt;
}

int main()
{
	Point p1;		// 1번생성자
	Point p2(1, 2); // 2번생성자
	Point p3 = p2;	// Point other = p2

	Point ret = foo();
}




