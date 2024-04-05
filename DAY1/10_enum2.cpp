
//enum DAYOFWEEK { mon = 1, tue = 2, wed = 3};

// C++11 의 새로운 enum 문법
enum class DAYOFWEEK { mon = 1, tue = 2, wed = 3};

int main()
{
//	int n1 = mon; // error. enum 타입 이름이 있어야 한다.

//	int n1 = DAYOFWEEK::mon; // error. mon 은 int 타입으로 암시적 변환안됨

	DAYOFWEEK n1 = DAYOFWEEK::mon; // ok

	int n2 = static_cast<int>(DAYOFWEEK::mon);
}
void foo(int n) {}
void foo(DAYOFWEEK n) {}




