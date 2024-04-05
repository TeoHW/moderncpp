// 18_if_init    50 page

int foo() { return 100; }

int main()
{
	int ret = foo();
	if (ret == 0)
	{
	}

	// c++ 17부터 위 코드를 아래처럼 사용 가능합니다.
	// if(init-statement; condition-statement) 
	if(int ret2 = foo(); ret2 == 0){

	} // <== 여기에서 ret2 파괴

	switch(int n = foo(); n){
		case 1: break;

	}

}
