// 12_delete_function 37 page

// 사용자가 만들지 않으면 컴파일러가 자동으로 만들어주는 함수
// special member function
// 생성자, 소멸자
// 복사생성자, 대입연산자
// 이동생성자, 이동대입연산자



class Point
{
	int x, y;
public:
	Point() {}
	Point(int a, int b) {}

	// 복사 생성자가 필요 없다면 
	// c++ 98에서는 함수 구현없이 선언만 해서 컴파일러가 생성하지 못하도록 막음
	// 11에서는 직접 delete를 사용
	Point(const Point& pt) = delete;
};
int main()
{
	Point p1;
	Point p2(1, 2);
	Point p3(p2); // 컴파일러가 만들어주는 복사생성자사용
}
