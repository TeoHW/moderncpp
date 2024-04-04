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
// 멤버 데이타를 기반 클래스에 보내려면
// => 멤버 데이타만을 가진 기반 클래스를 한개 더 만드세요
class StreamBuffer 
{
protected:
	Buffer buf{1024};
};

class StreamWithBuffer : public StreamBuffer, public Stream
{
public:
	StreamWithBuffer() : Stream(buf) {}
};

int main()
{
	StreamWithBuffer swb;
}