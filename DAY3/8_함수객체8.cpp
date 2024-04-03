
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less   { inline bool operator()(int a, int b) { return a < b; }};
struct Greater{	inline bool operator()(int a, int b) { return a > b; }};

template<typename T>
void sort(T pred)
{
	bool b = pred(1, 2); // (A)
}

int main()
{
	Less f1;
	Greater f2;
	sort( cmp1 );
	sort( cmp2 );
	sort( f1 );
	sort( f2 );
}
// 코드를 보고
// 1. sort() 함수가 몇개 생성되었을까요 ?
// 2. sort 외에 몇개의 함수가 생성되었을까요 ?
// 3. 각 생성된 sort()함수에서 (A) 부분이 호출일지 치환인지를 예측하세요

