int main()
{
	int x[3] = { 1,2,3 };

	auto a = x[0];    // int a = x[0]

	decltype(x[0]) d1 = x[0]; // int& d1 = x[0]
	decltype(auto) d2 = x[0]; // 위와 동일
}

