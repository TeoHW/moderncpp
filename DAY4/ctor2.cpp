#include <iostream>
// 이 코드는 문제 없음
// ctor3 은 문제있음
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