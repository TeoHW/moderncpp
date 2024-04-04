#include "chronometry.h"
#include <iostream>

class Window1
{
public:
	void event_loop() 
	{	
		Click();	
	}
	virtual void Click()  {}
};

class MainWindow1 : public Window1 
{
public:
	void Click() override {}
};

template<typename T>
class Window2
{
public:
	void event_loop() 
	{
		static_cast<T*>(this)->Click();
	}
	void Click()  {}
};

class MainWindow2 : public Window2<MainWindow2>
{
public:
	void Click() {}
};
//---------------------------------------------------------
constexpr std::size_t cnt = 100'000'000;

void ex1()
{
	MainWindow1 w;
	for( int i = 0; i < cnt; i++)
	{
		w.event_loop();
	}
}
void ex2()
{
	MainWindow2 w;
	for( int i = 0; i < cnt; i++)
	{
		w.event_loop();
	}
}

int main()
{
	chronometry(ex1);
	chronometry(ex2);
}