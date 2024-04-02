class Point 
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
void f1(int n) {}
void f2(Point pt) {}

Point f3() { return ? }

int main()
{
	f1(3);
}