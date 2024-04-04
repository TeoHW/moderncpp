#include <iostream>

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

//--------------
// 아래 클래스의 문제점을 찾으세요
class StreamWithBuffer : public Stream
{
	Buffer buf{1024};
public:
	StreamWithBuffer() : Stream(buf) {}
};

int main()
{
	StreamWithBuffer swb;
}