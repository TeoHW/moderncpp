
class Meter{
	int value;
public:
	Meter(int n) : value(n){}
};

Meter operator""_m(unsigned long long value)
{
	Meter meter(static_cast<int>(value));
	return meter;
}

int main()
{
	double d = 3.4;	// 3.4는 double

	float f = 3.4f;	// 3.4f는 float

	auto a = 3_m;	// 이순간 operator ""m(3)이 호출, _m으로 언더바를 붙여야 커스텀으로 사용, 언더바가 없는 경우는 표준에서 만드는 것을 예약함
	// auto a1 = 3cm;	// 이순간 operator ""cm(3)이 호출
}




