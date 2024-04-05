// C++98 초기화의 문제점 - 54 page
#include <complex>

int main()
{
	// 문제점 1. 변수의 종류에 따라 초기화 방법이 다르다.
	// => 중괄호 초기화로 해결
	int n1 {10};
	int n2{10}; 	
	int x[2]  { 1,2 };
	std::complex<double> c{1, 2};

	// 2. 동적 할당한 배열을 초기화 할수 없다.
	// => {} 초기화로 해결
	int* p = new int[3]{1,2,3};

	// 3. STL 컨테이너 사용시 초기값을 지정할수 없다.
	// => {} 와 std::initializer_list 로 해결
	std::vector<int> v={1,2,3,4,5}
}
class Test
{
	// 4. 클래스 멤버로 있는 배열을 초기화 할수 없다.
	// => 필드 초기화와 {} 초기화로 해결
	int x[3]{1,2,3};
};


// C#
//int[] x1 = {1,2,3,4};
//int[] x1 = [1,2,3,4];

