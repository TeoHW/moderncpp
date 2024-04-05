// 8_완벽한전달활용
#include <iostream>
#include <vector>

#define log std::cout
class Point
{
	int x, y;
public:
	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl; }
	Point(const Point&) { std::cout << "copy ctor" << std::endl; }
};
int main()
{
	std::vector<Point> v;
	
	// vector에 요소 넣기. 
	// => 아래 모든 경우의 화면 출력 결과를 잘 이해해 두세요
	// 1. 객체를 만든후에 넣기
//	Point pt{1, 2};
//	v.push_back(pt);

	// 2. 임시객체 형태로 넣기
//	v.push_back( Point{1,2} );
//	v.push_back( {1,2} ); // 위와 동일

	// 3.핵심!!!
	// => 객체를 만들어서 전달하지 말고, 
	//    객체를 만들기 위한 생성자 인자를 전달하자.

	v.emplace_back(1, 2);	
			// 이 함수가 내부적으로 버퍼에 new Point(1,2)로 생성.

			// main			emplace_back			Point(int, int)
			// 1, 2전달 =====> 받아서 다시 전달 =======>  1,2 
			//			완벽한 전달 기술이 없으면 
			//			emplace_back 을 만들수 없다!



	log << "-----" << std::endl;
}

// STL 컨테이너에(vector, list)
// 1. int, double 등을 보관한다면 
//    => push_back, push_front, insert 해도 됩니다.

// 2. user define type( string, Point)등을 값으로 보관할때
//    요소를 넣기만 할것이라면
// => push_xxx 보다는 emplace_xxx 를 사용하세요
//	  push_back => emplace_back
//	  push_front => emplace_front
//    insert     => emplace

// 3. user define type의 포인터를 보관하면
//    => push_back, push_front, insert 해도 됩니다.
