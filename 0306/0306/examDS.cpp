#include<iostream> // cout cin
#include"Rectangle.h"
#include"Rectangle.h"
using namespace std; // std::cin  --> cin 


int main() {
	Rectangle dsg; // �������� ���� ���Ƹ� �����Ƹ�(�����)
	Rectangle pyo(11, 16);
	cout << "dsg\'s area: " << dsg.getArea() << endl;
	cout << "pyo\'s area: " << pyo.getArea() << endl;
}
