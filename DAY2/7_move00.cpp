// 복사생성자 모양을 생각해 봅시다.
class Point
{
	int x, y;
public:
	Point() {}				// 1
	Point(int a, int b) {}	// 2
	// 컴파일러가 만들어주는 복사생성자
	// Point(const Point& other):x{other.x}, y{other.y}{}

	// 1. call by value 버전의 복사 생성자
	// Point(Point other):x{other.x}, y{other.y}{}
	// Point p3 = p2; // => Point other = p2 => Point other = p2 ... 무한루프
	// 복사 생성자가 무한히 호출 에러, 복사 생성자는 1번째 인자가 value가 될 수 없다.

	// 2. call by non-const lvalue reference
	// Point(Point& other):x{other.x}, y{other.y}{}
	// 일단 문제는 없으나, 함수의 리턴값으로 임시객체가 오는 경우 받을 수 없음
	Point(const Point& other):x{other.x}, y{other.y}{}
	// Point(Point& other):x{other.x}, y{other.y}{}
	// Point(Point&& other):x{other.x}, y{other.y}{}

};

Point foo(){
	return Point{3,5};
}
int main()
{
	Point p1;			// 1번 생성자
	Point p2(1, 2); 	// 2번 생성자
	Point p3(p2);		// 컴파일러가 제공하는 복사 생성자 호출
	Point p4 = foo();

}




