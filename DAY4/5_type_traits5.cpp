#include <iostream>
#include <type_traits>


template<typename T> struct is_pointer
{
	static constexpr bool value = false; // C++11 이후에는 이렇게
};

template<typename T> struct is_pointer<T*>
{
//	enum { value = true };
	static constexpr bool value = true;
};


template<typename T> struct remove_all_pointer
{
	if constexpr(std::is_pointer<T>::value){
		using type = remove_all_pointer<*T>::type
	}
	else{
		using type = T;
	}
	
};
template<typename T> struct remove_all_pointer<T*>
{
	using type = T;
};
int main()
{
	remove_all_pointer<int***>::type n;
	n = 10;
	
}
