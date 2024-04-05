// 9_enum - 32 page
#include <iostream>
// enum DAYOFWEEK { mon = 1, tue = 2, wed = 3};
// c++11의 새로운 enum
enum class DAYOFWEEK { mon = 1, tue = 2, wed = 3};
int main()
{
	// int n1 = mon; // c++11에서는 enum type이름을 같이 붙여야 한다.
	// int mon = 20;
	
	// int n2 = mon; // 지역변수와 같은 이름이면 우선순위에서 enum이 밀림


	// int n0 = DAYOFWEEK::mon; // error. mon은 int 타입으로 암시적 변환이 안됨
	DAYOFWEEK n0 = DAYOFWEEK::mon;
	int n2 = static_cast<int>(DAYOFWEEK::mon);
	std::cout << n2 -1 << std::endl;
}





