void foo(int (*p)[2]) {}
void goo(int (*p)[2][2]) {}

int main()
{
	int x[3][2] = {0};
	int y[3][2][2] = {0};

	foo(x);
	goo(y);

}