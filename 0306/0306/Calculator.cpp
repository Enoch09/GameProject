#include<iostream>
using namespace std;
#include"Calculator.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��Ͻÿ� >>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}