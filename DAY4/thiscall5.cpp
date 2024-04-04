#include <functional>

class Dialog 
{
public:
	void member_function(int a) {}
	static void static_member_function(int a) {}
};

void foo(int a) {}

template<typename F, typename ... Types>
decltype(auto) chronometry(F&& f, Types&& ... args)
{
	return f( std::forward<T>(args)... );
}


int main()
{
	chronometry(foo, 10); // foo(10) 
	
}