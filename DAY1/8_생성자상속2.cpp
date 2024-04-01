#include <list>
#include <iostream>

class MyList : public std::list<int>
{
public:
	// C++ 표준 std::list 에 함수 한개 정도만 추가하고 싶었다.
	void dump() const 
	{
		for( auto& e : *this )
			std::cout << e << ", ";
	}
};

int main()
{
	MyList st1(10, 3); // 10개를 3으로 초기화
	MyList st2(10);
	MyList st3 = {1,2,3,4,5};
}




