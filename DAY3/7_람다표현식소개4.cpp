bool cmp1(int a, int b) { return a < b; }
bool cmp2(int a, int b) { return a < b; }

template<typename IT, typename Pred>
void sort(IT first, IT last, Pred pred)
{
}

int main()
{
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	// #A
	sort(x, x+10, cmp1);
	sort(x, x+10, cmp2);

	// #B
//	sort(x, x+10, [](int a, int b) { return a < b; });
//	sort(x, x+10, [](int a, int b) { return a > b; });
}
// godbolt.org 에서 위 코드의 어셈블리 코드를 확인해 보세요
// A 일때 sort() 함수가 몇개 생성되었는지 ?
// B 일때 sort() 함수가 몇개 생성되었는지 ? 

