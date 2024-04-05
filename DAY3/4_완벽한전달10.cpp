#include "chronometry.h"
#include <thread>
#include <iostream>
using namespace std::literals;

void f1(){
	std::this_thread::sleep_for(3s);
}

void f2(int a, double d){
	std::this_thread::sleep_for(2s);
}

int main(){
	chronometry(f1);
	chronometry(f2, 10, 3.4);
	// f2(10, 3.4);
}