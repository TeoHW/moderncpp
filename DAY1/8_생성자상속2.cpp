#include <list>
#include <iostream>

class MyList : public std::list<int>
{
public:
	// C++ 표준 std::list에 함수 하나만 추가하고 싶을 때 
	void dump() const{
		for(auto& e: *this){
			std::cout << e << ", ";
		}
	}
	using std::list<int>::list;

};

int main()
{
	MyList st1(10, 3); // 10개를 3으로 초기화
	MyList st2(10);
	MyList st3 = {1,2,3,4,5};
	st1.dump();
	std::cout << std::endl;
	st2.dump();
	std::cout << std::endl;
	st3.dump();
	std::cout << std::endl;
}




