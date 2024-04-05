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
	
	pt.x = 10;			
	Point{1, 2}.x = 10;	// 임시 객체는 변경이 의미가 없다. 초기화를 할 때 값을 제대로 지정
	// 임시 객체는 lvalue가 아닌 rvalue
						

	Point* p1 = &pt;			
	Point* p2 = &Point{1, 2};	// 에러, 임시객체는 &연산자 사용 못함, 생성자에서 this는 사용 가능
							

	Point& r1 = pt;			
	Point& r2 = Point{1, 2}; // 임시 객체는 non-const&로 가리킬 수 없다. 
	const Point& r3 = Point{1,2}; // ok
	const Point& r3 = {1,2}; // ok
	// 임시객체는 const & 로 가리킬 수 있다.
	// const&로 임시객체를 가리키면 수명은 가져간 변수와 동일하게 연장된다.

	// c++11을 만들 때 move와ㅏ 완벽한 전달 개념을 만들려고 하다보니
	// const 없이 임시 객체를 가리켜야 할 필요가 생겼습니다. 
	// 그래서 새로운 참조문법 탄생
	Point&& r4 = Point{1,2};
	// 역시 임시 객체의 수명은 연장됩니다. 


}





