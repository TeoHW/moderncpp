#include <unordered_set>

// C 스타일 코드 - typedef 
// typedef int DWORD;
// typedef void(*F)(); 

using DWORD = int;
using F = void(*)();


// typedef std::unordered_set<int> USET_I;
// typedef std::unordered_set<double> USET_D;
// 새로운 타입에 대해 계속 추가 힘듬
// typedef std::unordered_set : template 입니다.
// typedef std::unordered_set<int> USET_I; : typed입니다.
// typedef : 타입의 별명만 만들 수 있다. template은 만들 수 없다. 따라서 using이 필요

template<typename T>
using USET = std::unordered_set<T>;


int main()
{
	DWORD n; 
	F     f; 
	USET<int> i;
	USET<double> d;
	
}
