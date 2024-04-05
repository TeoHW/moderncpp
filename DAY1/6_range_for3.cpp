#include <iostream>
#include <vector>

template<typename T>
auto mybegin(T& c) { return c.begin();}

template<typename T>
auto myend(T& c) { return c.end();}

// 배열 버전
template<typename T, int N>
auto mybegin( T(&arr)[N] ) { return arr; } // 배열의 이름은 배열의 주소

template<typename T, int N>
auto myend( T(&arr)[N] ) { return arr + N; } 


struct Point3D
{
	int x, y, z;

//	int* begin() { return &x;}
//	int* end()   { return &z + 1 ;} // end 는 마지막요소의 다음 주소
};
// 멤버가 아닌 일반함수로 만들어 놓아도 됩니다.
int* begin(Point3D& p) { return &(p.x);}
int* end(Point3D& p)   { return &(p.z) + 1 ;}


// 단 위 코드는 모든 멤버가 동일한 타입이고, 
// 연속된 메모리에 놓여 있다는 가정하에만 사용가능합니다.



int main()
{
	Point3D p;
	p.x = 10;
	p.y = 20;
	p.z = 30;

	for (int n : p)  // 될까요 ? 되게하려면 필요한 것은 ?
		std::cout << n << std::endl; 

//	auto first = std::begin(p); // 또는 p.begin()
//	auto last  = std::end(p);   // p.end()
}

// C++ 뿐 아니라
// C# : foreach(int e in v)
// python : for(    e in v)
// 인데, 모두 v의 반복자를 꺼내는 코드를 생성하게 됩니다.
// 즉, C++ 과 동일한 원리..













