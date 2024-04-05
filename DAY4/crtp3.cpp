#include <iostream>

class BaseWindow
{
    int color;
    int move;
public:
    void MoveWindow(){}
    void Click()     { std::cout << "Window Click" << std::endl; }
};

template<typename T>
class Window : BaseWindow
{
public:
	// void event_loop() 
	// {
	// 	Click();
	// }
	// void Click()     { std::cout << "Window Click" << std::endl; }
    // 이것만 써놓으면 자식 노드에서 event_loop()호출하면 항상 기반 클래스의 click이 호출됨, 의도가 다름
    // event_loop(&Window) -> this->click();

    // virtual void Click()     { std::cout << "Window Click" << std::endl; }
    // virtual을 추가하면 의도대로 자식 노드의 click을 호출할 수는 있지만 virtual table과 
    // 실제 click 호출 시 누구를 불러야 하는지 검사하는 오버헤드가 발생한다. 따라서 이것을 아래와 같이 변경해야 함

    void event_loop(){
        static_cast<T*>(this)->Click();
    }
};

class MainWindow : public Window<MainWindow>
{
public:
	void Click() { std::cout << "MainWindow Click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_loop();
}

// 결론
// virtual 은 오버헤드가 있어서 대체 가능하다면 템플릿으로
// 템플릿을 사용하는 클래스는 따로 분리해두는게 좋다
// 템플릿과 관련없는 기반 클래스는 따로 구현하고 상속을 통해 이어붙이는게 좋다
// 구글에서 "C++ IDioms" 검색  후 첫번째 링크