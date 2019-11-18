#include<iostream>
#include"Point.h"
using namespace std;
int main() {
	Point xy;
	cout << "Input X>>";
	int x;
	cin >> x;
	cout << "Input Y>>";
	int y;
	cin >> y;
	xy.setX(x); xy.setY(y);
	cout << "Point(x,y) is (" << x << "," << y << ").";
}