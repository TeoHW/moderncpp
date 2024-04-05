#include <functional>
#include <vector>
#include <iostream>

void foo() { std::cout << "foo\n"; }

class Button
{
	using HANDLER = std::function<void()>;
	std::vector<HANDLER> v;

public:
	void add_handler(HANDLER h) { v.push_back(h);}
	void click() 
	{
		for( auto& f : v)
			f();
	}
};

int main()
{
	Button btn;
	btn.add_handler(&foo);
	btn.add_handler([]() { std::cout << "lambda\n";});
	btn.click();
}
