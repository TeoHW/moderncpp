
// 가변인자 클래스 템플릿
template<typename ... T> 
class Sample
{
};

int main()
{
	Sample<> t0;
	Sample<int> t1;
	Sample<int, double> t2;
	Sample<int, double, short> t3;
}