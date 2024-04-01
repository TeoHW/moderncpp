class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};

Meter operator""m( unsigned long long value )
{
	Meter meter( static_cast<int>(value));
	return meter;
}

int main()
{
	auto a1 = 3m;   // 이순간 operator""m(3) 이 호출됩니다.
//	auto a2 = 3cm;  //       operator""cm(3) 


	double d = 3.4; // "3.4"  는 double
	float f = 3.4f; // "3.4f" 는 float
}




