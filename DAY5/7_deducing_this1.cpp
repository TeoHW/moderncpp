class Point 
{
	int x;
	int y;
public:
	// 기존 방식의 멤버 함수는
	// "implicit object parameter(암시적 객체 인자)"
	void set1(int a, int b) 	// set1(Point* this, int a, int b)
	{							// {
		x = a;					// 		this->x = a;
		y = b;					//		this->y = b;
	}							// }

	// C++23 에서 추가되는
	// => "explicit object parameter" 라는 문법. (별명이 deducing this)
	// => 검파일러가 "this" 인자를 추가하게 하지말고, 
	//    사용자가 직접 코드로 작성하는 문법.
	// => 아래 set2 는 위의 set1 과 완벽히 동일.
	// => "self" 는 변수이름이므로 아무 이름이나 해도 됩니다.
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