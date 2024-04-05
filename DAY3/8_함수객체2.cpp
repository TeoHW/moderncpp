#include <iostream>
#include <bitset>

template<std::size_t N=10>
class Urandom
{
	std::bitset<N> bs;
	bool recycle;

public:
	Urandom(bool b = false) : recycle(b){
		// bs.set(4);  // 4번째 비트를 1로
		bs.set();	// 모든 비트를 1로
	}
	int operator()()
	{
		if(bs.none()){
			if(recycle == true)	bs.set();
			else	return -1;
		}
		int k = -1;
		while(!bs.test(k = rand()%N));
		bs.reset(k);
		return k;
	}
};

Urandom<100> urand{true};
// 0 ~ 9 사이의 난수를 반환하는 함수


// 0 ~ 9 사이에 중복되지 않는 난수
// 일반 함수는 동작이 있지만 상태가 없습니다
// 함수 실행중 발생된 데이터를 저장할 공간이 없습니다. 
// static 지역변수 또는 전역변수가 최선이지만 한계점이 있습니다. 

int main()
{
	for ( int i = 0; i < 120; i++ )
		std::cout << urand() << ", ";
	
}