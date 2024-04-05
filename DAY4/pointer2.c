int main()
{
	int n = 0;
	int* pi = &n;

	double d = 0;
	double* pd = &d;


	int x[3] = {1,2,3};
	int *pa = x; // 이것은 x[0]의 주소이다. 왜냐하면 배열의 주소는 &x이고 이것의 첫번 째 값을 접근하면 *(&x)
	// 접근하면 해당 값은 첫번째 값의 주소이기 때문에 &x[0]의 의미이고 이것은 *(&x) => x, 
	int (*parr)[3] = &x;

}