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
	Point p3({ 1,2 }); 	// Point(init_list)
	Point p4{ 1,2 };	// Point(init_list), 만약 생성자에 init_list가 없으면 int,int로 호출된다

	Point p5(1, 2, 3); 	// Point(int, int, int)가 없기 때문에 에러 발생
	Point p6{ 1, 2, 3 }; // init_list로 호출되기 때문에 가능
	Point p7 = { 1,2,3 };// init_list로 호출되기 때문에 가능 (explicit 아니기 때문에 가능)

	// 생성자 인자로 std::initializer_list 를 사용하면
	// {} 초기화로 가변 인자로 전달 가능합니다. 
	std::vector<int> v1{1,2,3,4,5,6};
	std::vector<int> v2 = {1,2,3,4,5,6};

	// c++17부터는 타입도 생략 가능
	std::vector v3{1,2,3,4,5,6};
}


