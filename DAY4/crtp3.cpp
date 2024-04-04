#include <iostream>

class BaseWindow 
{
	int color;
	int width;
public:
	void MoveWindow() {}
	void Click()  { std::cout << "Window Click" << std::endl; }
};
// 구글에서 "C++ IDioms"검색후 1번째 링크

template<typename T>
class Window : public BaseWindow
{
public:
	void event_loop() 	// void event_loop(Window* this)
	{
//		Click();		// this->Click();
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