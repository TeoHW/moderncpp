#include <iostream>
#include <bitset>

class URandom
{
	std::bitset<10> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b) 
	{
//		bs.set(4); // 4번째 비트를 1로
		bs.set();  // 모든 비트를 1로
	}

	int operator()()
	{
		return rand() % 10;
	}
};
URandom urand; // urand 는 이제 객체 입니다.


int main()
{
	for ( int i = 0; i < 10; i++ )
		std::cout << urand() << ", ";
	
}