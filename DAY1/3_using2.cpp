#include <unordered_set>

typedef std::unordered_set<int>    USET_I;
typedef std::unordered_set<double> USET_D;

// std::unordered_set      : template 입니다.
// std::unordered_set<int> : type 입니다.

// typedef : 타입의 별명만 만들수 있습니다.
// using   : 타입의 별명 + template 의 별명도 가능

template<typename T>
using USET = std::unordered_set<T>;

int main()
{
//	std::unordered_set<int>    s1;
//	std::unordered_set<double> s2;
	USET_I s1;
	USET_D s2;
}
