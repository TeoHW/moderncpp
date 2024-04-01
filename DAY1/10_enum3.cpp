#include <iostream>
#include <type_traits>

//enum DAYOFWEEK { SUN = 0, MON = 1, TUE = 2 };
				// => 내부적으로는 int 타입 사용

// enum class 문법은 내부 타입 변경가능합니다.
enum class DAYOFWEEK : char { SUN = 0, MON = 1, TUE = 2 };

int main()
{
	using T =  std::underlying_type<DAYOFWEEK>;

	std::cout << typeid(T).name() << std::endl;

}




