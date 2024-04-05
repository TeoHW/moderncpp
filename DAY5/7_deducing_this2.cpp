#include <iostream>

class BaseWindow 
{
	int color;
	int width;
public:
	void MoveWindow() {}
	void Click()  { std::cout << "Window Click" << std::endl; }
};

// C++23 전의 CRTP 기술
template<typename T>
class Window : public BaseWindow
{
public:
	void event_loop() 	// void event_loop(Window* this)
	{
		static_cast<T*>(this)->Click();
	}
};

class MainWindow : public Window< MainWindow >
{
public:
	void Click()  { std::cout << "MainWindow Click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_loop();
}