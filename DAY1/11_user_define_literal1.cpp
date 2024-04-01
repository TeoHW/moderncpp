class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};

Meter operator""m( int value )
{
	Meter meter(value);
	return meter;
}

int main()
{
	double d = 3.4; // "3.4"  는 double
	float f = 3.4f; // "3.4f" 는 float

	auto a1 = 3m;   // 이순간 operator""m(3) 이 호출됩니다.
//	auto a2 = 3cm;  //       operator""cm(3) 
}




