class Point 
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
void f1(int n) {}
void f2(Point pt) {}

Point f3() { return {1,2}; } // 이 표기법도 가능합니다.

int main()
{
	f1(3);   // int n = 3
	f1({3}); // int n = {3}
	f2({1,2}) // Point pt = {1,2}
}