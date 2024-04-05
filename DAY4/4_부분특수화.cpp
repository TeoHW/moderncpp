// 3_부분특수화1 - 156 p
#include <iostream>


template<typename T> class Stack
{
public:
	void push(T a) { std::cout << "T" << std::endl; }
};

// 부분 특수화
template<typename T> class Stack<T*> // 포인터 형만 받겠다
{
public:
	void push(T* a) { std::cout << "T*" << std::endl; }
};

// 특수화
template<> class Stack<char*>	// char* 형이라면 이것으로 처리
{
public:
	void push(char* a) { std::cout << "char*" << std::endl; }
};

int main()
{
	Stack<int>   s1; s1.push(0);
	Stack<int*>  s2; s2.push(0);
	Stack<char*> s3; s3.push(0);
}
