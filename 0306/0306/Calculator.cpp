#include<iostream>
using namespace std;
#include"Calculator.h"

void Calculator::run() {
	cout << "두 개의 수를 입력하시요 >>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}