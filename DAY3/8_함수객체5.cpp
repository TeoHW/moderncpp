#include <iostream>
#include <algorithm> 

// 아래 코드는 sort 의 비교정책을 교체할수 있도록하기 위해 함수 포인터 사용
// 장점 : 비교 정책을 변경할수 있으므로 유연성이 좋다.
// 단점 : 이중루프안에서 다시 함수 호출 - 느리다!!!

// 비교 정책을 교체할수 있는데, 비교 정책함수가 인라인 치환될수 없을까?
// => 함수 객체는 가능

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			// if (x[i] > x[j])  				// 1
			// 	std::swap(x[i], x[j]);
			
			if( cmp(x[i], x[j]) == true )	// 2
				std::swap(x[i], x[j]);
		}
	}
}
//--------------------------
// 비교 정책으로 사용할 이항함수
inline bool cmp1(int a, int b) { return a > b;}
inline bool cmp2(int a, int b) { return a < b;}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	// cmp2가 함수 포인터로 전달되기 때문에 inline cmp2로 만들었다 하더라도 호출 비용이 발생한다. 
	// 루프 횟수가 증가할수록 매우 큰 문제 발생
	// Sort(x, 10, cmp2); 

}
