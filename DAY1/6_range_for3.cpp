﻿#include <iostream>
#include <vector>

struct Point3D
{
	int x, y, z;

	int* begin() { return &x;}
	int* end()   { return &z + 1 ;} // end 는 마지막요소의 다음 주소
};
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












