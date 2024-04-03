// 상수 멤버 함수는 "선택" 이 아닌 "필수" 문법 입니다.

// => 객체의 상태를 변경하지 않은 모든 멤버 함수(getter) 는 반드시
//    상수 멤버 함수 이어야 합니다.

class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x{x}, y{y}, w{w}, h{h} { } 

//	int getArea() { return w * h;}  // 나쁜 코드가 아닌 틀린 코드 입니다
	int getArea() const { return w * h;} 
};

//void foo(Rect r) // call by value : 복사본에의한 메모리 오버헤드
void foo(const Rect& r)
{
	int area = r.getArea();  // ???
}

int main()
{
	Rect r{1,1,10,10};  // 상수 객체 아님.

	int area = r.getArea(); // ok

	foo(r);
}