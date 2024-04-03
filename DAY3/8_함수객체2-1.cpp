#include <iostream>
#include <bitset>

template<std::size_t N = 10>
class URandom
{
	std::bitset<N> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b) 
	{
//		bs.set(4); // 4번째 비트를 1로
		bs.set();  // 모든 비트를 1로
	}

	int operator()()
	{		
		if ( bs.none() ) // 모두 0 이면
		{
			if ( recycle == true )
				bs.set(); // 다시 모두 1
			else
				return -1;
		}


		int k = -1;

		while( ! bs.test( k = rand() % N ) );

		bs.reset(k);

		return k;
	}
};
//URandom urand; // urand 는 이제 객체 입니다.
//URandom urand{true};  // 10
URandom<20> urand{true};  


int main()
{
	for ( int i = 0; i < 15; i++ )
		std::cout << urand() << ", ";
	
}