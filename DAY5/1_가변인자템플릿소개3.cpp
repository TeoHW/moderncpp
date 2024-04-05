#include <iostream>
#include <stdarg.h>

int sum( int cnt, ... )
{
	va_list ap;	// 대부분 char* ap입니다.
	va_start(ap, cnt);	// ap = cnt의 다음 인자를 가리키도록 설정
	int sum = 0;
	for(int i = 0; i < cnt; ++i){
		sum += va_arg(ap, int);	// ap에서 int를 꺼내고, ap를 int만큼 이동
		// 32bit, 64bit 환경에서 메모리 크기가 서로 다른 것을 이것으로 해결함
	}
	
	va_end(ap); // 특별하게 하는 일은 없지만, 표준에서는 하라고 되어 있음
	return sum;
}

int main()
{
	int ret = sum( 5, 1,2,3,4,5);
	
	std::cout << ret << std::endl;
}