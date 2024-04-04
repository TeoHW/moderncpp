#include <iostream>

class AAA
{
public:
	operator int() { return 0;}
};
int main()
{
	AAA aaa;

	int n = aaa;
}