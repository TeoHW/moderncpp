#include <iostream>
using namespace std;

struct Base
{
	int value = 10;
};
struct Derived : public Base
{
	int value = 20;
};
int main()
{
	Derived d;

	cout << d.value << endl; // 20

	cout << (static_cast<Base>(d)).value << endl;  // 10
	cout << (static_cast<Base&>(d)).value << endl; // 10
		
	(static_cast<Base>(d)).value = 30; // error. 임시객체
	(static_cast<Base&>(d)).value = 30;// ok	

}
