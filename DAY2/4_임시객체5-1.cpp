#include <iostream>

class Counter
{
	int cnt = 0;
public:
	Counter inc() 
	{ 
		++cnt;
		return *this;
	}
	int get() const { return cnt;}
};
int main()
{
	Counter c;
	c.inc().inc().inc();

	std::cout << c.get() << std::endl;
}