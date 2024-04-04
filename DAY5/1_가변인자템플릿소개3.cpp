#include <iostream>
#include <stdarg.h>

// 규칙 1. 1번째 인자는 반드시 이름이 있어야 합니다.
//     2. 1번째 인자로 반드시 나머지 인자의 갯수를 보내야 합니다.
int sum( int cnt, ... )
{
	int s = 0;

	va_list ap;			// 대부분의 컴파일러에서 char* ap 입니다.
	va_start(ap, cnt);	// ap = cnt 의 다음 인자를 가리키도록 설정

	for ( int i = 0; i < cnt; i++)
	{
		s += va_arg(ap, int); // ap 에서 int 를 꺼내고, ap 를 int 크기 만큼
	}
	
	va_end(ap); // 특별하게 하는 일은 없지만, 표준에서는 꼭 이렇게 하라고 되어있습니다.
	return s;	
}

int main()
{
	int ret = sum( 5, 1,2,3,4,5);
	
	std::cout << ret << std::endl;
}