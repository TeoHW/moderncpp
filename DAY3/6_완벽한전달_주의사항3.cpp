// 9_완벽한전달_주의사항3

// forwarding reference 이야기

// template<typename T> class Test
// {
// public:

// 	void foo(T&& arg)
// 	{
// 	}
// };
// int main()
// {
// 	int n = 0;
// 	Test<int> t;			
	
// 	// 아래 코드를 생각해보세요. 에러가 있을까요 ?
// 	t.foo(n); // foo함수는 템플릿 코드 template<typename T>가 없다. 즉 다른 T이다.
// 	t.foo(10); 
// }

template<typename T> class Test
{
public:

	void foo(T&& arg)
	{
	}
	template<typename U>
	void goo(U&& arg){}
};
int main()
{
	int n = 0;
	Test<int> t;			
	
	// 아래 코드를 생각해보세요. 에러가 있을까요 ?
	t.goo(n); // foo함수는 템플릿 코드 template<typename T>가 없다. 즉 다른 T이다.
	t.goo(10); 
}
