#include <iostream>

class Window
{
public:
	void event_loop() 
	{
		Click();
	}
	void Click()     { std::cout << "Window Click" << std::endl; }
};

class MainWindow : public Window 
{
public:
	void Click() { std::cout << "MainWindow Click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_loop();
}