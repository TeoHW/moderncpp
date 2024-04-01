// 12_delete_function 37 page

// special member function 
// => 사용자가 만들지 않으면 컴파일러가 만들어주는 함수
// => 생성자, 소멸자
// => 복사생성자, 대입연산자
// => 이동생성자, 이동대입연산자

class Point
{
	int x, y;
public:
	Point() {}
	Point(int a, int b) {}

	// 복사 생성자가 필요 없다면(즉, 컴파일러가 만들지 못하게 하려면)
	// C++98 : 아래의 테크닉 사용
//private:
//	Point(const Point& pt); // 핵심 : 구현하지 말고, 선언만 제공

	// C++11 : 컴파일러에게 만들지 말라고 요청하면 된다.
	Point(const Point& pt) = delete;
};
int main()
{
	Point p1;		// ok
	Point p2(1, 2);	// ok
	Point p3(p2); // 컴파일러가 만들어주는 복사생성자사용
}
