// decltype 규칙 2.
// ()의 표현식이 심볼의 이름 외 다른 연산자와 같이 있을 때 
// (exp) exp의 최종 결과가 = 왼쪽에 올 수 있으면(즉 lvalue) 참조 타입, 만약 lvalue가 안되면 값 타입

int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	int* p = &n;

	int x[3] = { 1,2,3 };

	decltype(p)		d1; // int* d1;
	decltype(*p)	d2; // *p = 10과 같이 가능하므로 int& d2가 됨
	decltype(x[0])	d3; // x[0] = 10; 가능, int& d3;

	decltype(n) d; // 다른 연산자 없음 int d;
					

	decltype(n + n) d4; // n+n은 lvalue가  아니므로 int d4;
	decltype(++n)   d5; // ++n은 n을 증가시키고 n에 대해 참조형 변수로 되돌려주는 형식 lvalue가 될 수 있으므로 int& d5;
						
						
	decltype(n++)   d6; // n++은 후치형으로 n으로 decltype에서 인식되므로 int d6;
			
}


// 실제로는 재정의 안되지만 설명을 위한 가정
// 전위형 ++n
int& operator++(int& n){
	n = n + 1;
	return n;
}

// 후위형, 구분을 위해 int하나 인자를 추가
int operator++(int& n, int){
	int temp = n;
	n = n + 1;
	return temp;
}
