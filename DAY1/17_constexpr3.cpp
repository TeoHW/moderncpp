// 아래 코드가 왜 에러인지 생각해 보세요 ?
// class A
// {
// 	int data;
// public:
// 	void foo()
// 	{
// 		*data = 10;
// 	}
// };
// int main()
// {
// 	A a;
// }
#include <iostream>


template<typename T>
class A
{
	T data;
public:
	void foo()
	{
		*data = 10;
	}
};
int main()
{
	A<int> a;
	a.foo();
	// std::cout << a.data << std::endl;

}

