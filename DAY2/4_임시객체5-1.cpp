#include <iostream>

class Counter
{
	int cnt = 0;
public:
//	Counter inc() 
	Counter& inc() 
	{ 
		++cnt;
		return *this;
	}
	int get() const { return cnt;}

	~Counter() { std::cout << "~Counter()" << std::endl; }

	Counter(const Counter& other) : cnt{other.cnt}
	{
		std::cout << "copy ctor" << std::endl;
	}
	Counter() = default;

};
int main()
{
	Counter c;
	std::cout << "-------------------\n";
	c.inc().inc().inc();
	std::cout << "-------------------\n";

	std::cout << c.get() << std::endl;
}