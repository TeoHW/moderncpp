#include <iostream>
#include <type_traits>

enum DAYOFWEEK { SUN = 0, MON = 1, TUE = 2 };
  // => 내부적으로 int 타입 사용

enum class DAYOFWEEKC : char { SUN = 0, MON = 1, TUE = 2 };
  // 메모리 효율을 위한 char형으로 지정

int main()
{

    using T = std::underlying_type_t<DAYOFWEEK>;
    using T2 = std::underlying_type_t<DAYOFWEEKC>;
    std::cout << typeid(T).name() << ", " << typeid(T2).name() << std::endl;

}




