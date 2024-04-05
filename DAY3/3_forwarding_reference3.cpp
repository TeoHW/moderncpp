// 6_forwarding_reference1 - 아주 아주 중요!!
void f1(int&  r) {}
void f2(int&& r) {}

// 함수 인자로
// int&  : lvalue만 전달 가능 (const int& 일땐 rvalue/lvaue 가능)
// int&& : rvalue만 전달 가능
// T&    : 

template<typename T> void f3(T& a)
{
}

template<typename T> void f4(T&& a)
{
}

int main(){
    int n = 3;

    f3<int>(n);
    f3<int&>(n);
    f4<int&>(n);
    f4<int&&>(3);
    f4<int>(3);
    f4(n);
    f4(3);


}