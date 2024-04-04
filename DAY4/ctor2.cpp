#include <iostream>

// 아래 코드는 문제가 없는 코드입니다.
// => 다음 코드가 문제 입니다(ctor3.cpp)

class Buffer
{
public:
	Buffer(std::size_t sz) { std::cout << "initialize buffer" << std::endl;}
	void use() 			   { std::cout << "use buffer" << std::endl;}
};

class Stream
{
public:
	Stream(Buffer& buf) { buf.use();}
};

int main()
{
	Buffer buf(1024);
	Stream s(buf);
}