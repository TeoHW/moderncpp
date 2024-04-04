#include <iostream>
#include <type_traits>

template<typename IT, typename T>
void find(IT first, IT last, T value)
{
}

int main()
{	
	int x[3] = {1,2,3};
	find(x, x+3, 2);
	find_if(x, x+3, [](int n){ return n %2 == 0;});
}