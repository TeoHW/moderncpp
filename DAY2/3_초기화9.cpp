// 1_초기화9. - 63 page
#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int)      { std::cout << "int" << std::endl;	}
	Point(int, int) { std::cout << "int, int" << std::endl; }
	Point(std::initializer_list<int> e) { std::cout << "initializer_list<int>" << std::endl; }
};
int main()
{
	Point p1(1);		// Point(int)
	Point p2(1, 2);		// Point(int, int)
	Point p3({ 1,2 });	// Point(std::initializer_list<int>)

	Point p4{ 1,2 };	// 1. Point(std::initializer_list<int>) 가 있으면 사용
						// 2. 없으면 Point(int, int)

	Point p5(1, 2, 3); 	// error. Point(int, int, int) 생성자 없음.
	Point p6{1, 2, 3};  // ok.  Point(std::initializer_list<int>)
	Point p7 = { 1,2,3 };// ok. explicit 아님.

	// 생성자 인자로 std::initializer_list 를 사용하면
	// {} 초기화로 가변 인자로 전달 가능합니다.
	
	// 그래서 "C++11" 부터 모든 STL 컨테이너는 아래 처럼 사용가능합니다.
	std::vector<int> v1{1,2,3,4,5,6};
	std::vector<int> v2 = {1,2,3,4,5,6};

	std::vector v3{1,2,3,4,5,6}; // C++17 부터는 타입 생략도 가능.
}


