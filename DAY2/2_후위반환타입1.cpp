// 1_후위반환타입1.cpp - 교재 73 page

// int square(int a)
// {
// 	return a * a;
// }

// c++ 11에서 추가된 :suffix return type" 모양의 함수
auto square(int a) -> int
{
	return a * a;
}

int main()
{
	square(3);
}
