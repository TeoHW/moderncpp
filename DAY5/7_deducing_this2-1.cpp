#include <iostream>

class BaseWindow 
{
	int color;
	int width;
public:
	void MoveWindow() {}
	void Click()  { std::cout << "Window Click" << std::endl; }
};

// C++23 이후
class Window : public BaseWindow
{
public:
	// implicit object parameter : this 의 타입이 항상 현재 클래스 일수 밖에 없다.
	//							  (Window*)				
	// explicit object parameter : 아래 처럼 template 으로 하면 this 의 타입을
	//							멤버 함수 호출시 사용된 객체의 타입으로 추론가능
	//							즉, w.event_loop() 였다면
	//							w 의 타입으로 self 의 타입 결정
	// event_loop() 는 부모 클래스가 제공하지막
	// 자식객체.event_loop() 하면 self 의 타입은 "자식 타입"

	// "this 의 타입이 추론될수 있다는 것"
	// => 그래서 별명이 "deducing this"

	template<typename T>
	void event_loop(this T& self) 	
	{
		self.Click();
	}
};

class MainWindow : public Window 
{
public:
	void Click()  { std::cout << "MainWindow Click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_loop(); // event_loop(w)
}