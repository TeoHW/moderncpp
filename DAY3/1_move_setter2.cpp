﻿// 105 page.. 상수 객체와 move
#include <iostream>
#include <vector>

class Object
{
public:
	Object() {}
	Object(const Object&) { std::cout << "copy" << std::endl; }
	Object(Object&&) noexcept  {std::cout << "move" << std::endl;	}
};
int main()
{
	Object o1;
	Object o2 = std::move(o1);	 // move

	const Object o3;
	Object o4 = std::move(o3);	 // copy. 상수객체는 move 될수 없습니다.
								 // "o3.자원포인터 = nullptr" 을 할수 없습니다
			// static_cast<o3객체타입&&>(o3);
			// static_cast<const Object&&>(o3);
				

}



