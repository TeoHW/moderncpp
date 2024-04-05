class Point{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b){}
};

void f1(int n){}
void f2(Point pt){}

Point f3() {
	int x = 10;
	int y = 20;
	return {x,y};
}

int main(){
	f1(3);
	f2({3});	// int n = {3};
	f2({1,2});  // Point pt = {1,2};
}