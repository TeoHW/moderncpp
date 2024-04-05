// 1_임시객체1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
//	Point pt(1, 2); 	// named object
						// 수명 : 자신을 선언한 {}을 벗어날때 파괴

//	Point (1, 2);		// unnamed object ( temporary )
						// 수명 : 자신을 선언(생성)한 문장의 끝

	Point(1, 2), std::cout << "X" << std::endl;

	std::cout << "-------" << std::endl;
}

// 임시객체를 생성하는 법
// => "클래스 이름()"
// => Point(1,2)  => 함수 호출 표기법과 동일해서 혼동이 있습니다.
// => Point{1,2}  => 함수 호출과 다른 표기법이라서 가독성이 더 좋습니다.
//					C++11 이후라면 임시객체 만들때 {} 사용 권장




