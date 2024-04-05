class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x{x}, y{y}, w{w}, h{h} { } 

	int getArea() const { return w * h;} 
};

// void foo(Rect r) // call by value => call by ref 변환
void foo(const Rect& r) // call by value => call by ref 변환
{
	int area = r.getArea(); 
}

int main()
{
	Rect r{1,1,10,10}; // 상수 객체 아님

	int area = r.getArea(); 

	foo(r);
}