
class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
class Rect
{
	// Point pt; // ?
	Point pt{0,0}; // 반드시 중괄호만 가능, 괄호는 에러, 직접 중괄호 안의 값으로 초기화된다.
public:
	Rect() {}
};
int main()
{
	Rect r1;
}

