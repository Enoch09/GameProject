#include<iostream>
#include"Point.h"
using namespace std;

void Point::setX(int _x) { 
	if (_x >= 0 && _x <= 10)
		x = _x;
	else
		x = 0;
}
void Point::setY(int _y) { 
	if (_y >= 0 && _y <= 10)
		y = _y;
	else
		y = 0;
}
int Point::getX() { return x; }
int Point::getY() { return y; }