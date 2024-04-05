class Point 
{
	int x;
	int y;
public:
	void set1(int a, int b) 	// set1(Point* this, int a, int b)
	{							// {
		x = a;					// 		this->x = a;
		y = b;					//		this->y = b;
	}							// }

	// C++23 에서 추가되는
	// => "explicit object parameter" 라는 문법
	void set2(this Point& self, int a, int b) 	
	{							
		self.x = a;					
		self.y = b;					
	}							
};

int main()
{
	Point p;
	p.set1(10, 20);	// set1(&p, 10, 20)
	p.set2(10, 20);
}