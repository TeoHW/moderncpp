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
// Stream 생성자가 먼저 호출되기 때문에 buf에 대한 생성이 이뤄지지 않은 상태이기 때문에 오류 발생
// 변수의 생성자 호출은 부모 클래스의 생성자 호출 이후에 이루어짐
// 결론 : 자신의 멤버데이터를 기반 클래스의 생성자에 절대로 보내지 말 것

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