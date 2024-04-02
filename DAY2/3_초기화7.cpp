
class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
class Rect
{
	Point pt{0, 0}; // C++11 부터는 이렇게 가능.
//	Point pt(0, 0); // 이렇게 하면 에러.
public:
	Rect() {}
//	Rect() : pt(0, 0) {} // C++98시절 멤버 데이타의 인자가 있는 생성자 호출을 위해서
};
int main()
{
	Rect r1;
}

