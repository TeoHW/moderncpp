// 3_임시객체1 - 77 page
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
// 임시객체와 함수 반환값 -  82 page
/*
void f1(Point  pt) {} // call by value		복사본 생성
void f2(Point& pt) {} // call by reference	복사본 생성 안됨.

int main()
{
	Point p{0, 0};
	f1(p);
	f2(p);
}
*/

Point pt{1, 2};

Point foo() 	// return by value : 리턴용 임시객체를 생성헤서 반환
{
	return pt;  // retirn Point{pt}
}

Point& goo()	// return by reference : 리턴용 임시객체를 만들지 말고
{
	return pt;	// alias 를 반환해 달라.
}

int main()
{
	foo().x = 10;	// error. "임시객체.x = 10" 인데. 
					// 임시객체는 등호의 왼쪽에 올수 없다.
	goo().x = 10;   // ok "pt.x = 10" 의 의미
}


