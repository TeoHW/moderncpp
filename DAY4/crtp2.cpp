#include <iostream>

class Window
{
public:
	// 화면 출력 결과 예측해 보세요
	void event_loop() 
	{
		Click();
	}
	void Click()  { std::cout << "Window Click" << std::endl; }
};

class MainWindow : public Window 
{
public:
	void Click()  { std::cout << "MainWindow Click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_loop();
}