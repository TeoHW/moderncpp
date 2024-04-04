
// 다음중 좋은 코드는 ?
void f1(int n)        { int a = n;}
void f2(const int& r) { int a = r;}

int main()
{
	int x = 5;
	f1(x);
	f2(x);
}