#include <iostream>

class Counter
{
	int cnt = 0;
public:
	void inc() 
	{ 
		++cnt;
	}
	int get() const { return cnt;}
};
int main()
{
	Counter c;
	c.inc();
	c.inc();
	c.inc();

	std::cout << c.get() << std::endl;
}