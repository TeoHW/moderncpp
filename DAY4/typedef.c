typedef int DWORD; // typedef A대신 B이름사용

typedef void(*F)(int);
typedef int ARR[3];



int n;			// n 은 int 타입의 변수
int arr[2];		// arr는 int[2] 타입의 변수
void(*f)(int);	// f  는 함수 포인터 변수

// typedef : 변수 선언문에서 "변수이름" 위치에 있는 이름을 타입으로 해달라는 것
 
typedef int n;			// n 은 int 타입의 별명
typedef int arr[2];		// arr는 int[2] 타입의 별명
typedef void(*f)(int);	// f  는 함수 포인터 별명

int main()
{
	arr a; // int a[2]
	
}