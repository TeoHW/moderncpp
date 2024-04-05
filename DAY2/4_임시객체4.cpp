#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// 임시객체의 특징 - 79 page
int main()
{
	Point pt{1, 2};
	
	pt.x = 10;			// ok
	Point{1, 2}.x = 10;	// error. 임시객체는 =의 왼쪽에 놓일수 없다.
						//		  임시객체는 "lvalue" 가 아닌 "rvalue" 
						
	Point* p1 = &pt;			// ok	
	Point* p2 = &Point{1, 2};	// error. 임시객체는 주소를 구할수 없다.
								// & 연산자 사용못함
								// 생성자에서 "this" 사용은 가능.
							
	Point& r1 = pt;				// ok
	Point& r2 = Point{1, 2};	// error. 
								// 임시객체는 non-const & 로 가리킬수 없다.

	const Point& r3 = Point{1, 2};	// ok. 핵심
									// 임시객체는 const & 로 가리킬수 있다
									// 임시객체를 const & 로 가리키면
									// 임시객체의 수명은 연장 됩니다.
									// r3의 수명과 동일
									// "lifetime extension" 이라고 합니다.

	// C++11 을 만들때, move 와 완벽한 전달 개념을 만들려고 하다보니
	// const 없이 임시객체를 가리켜야 할 필요가 생겼습니다.
	// 그래서 새로운 참조 문법 탄생
	Point&& r4 = Point{1,2};
				// => 역시, 임시객체의 수명은 extension 됩니다.

}





