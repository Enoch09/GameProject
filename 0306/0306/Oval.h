#pragma once
#include<iostream>
using namespace std;
class Oval{
	int width, height;
public:
	Oval();
	Oval(int w , int h);
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
	~Oval();
};

int Oval::getWidth() {
	return width;
}
int Oval:: getHeight() {
	return height;
}
void Oval::set(int w, int h) {
	width = w;
	height = h;
}
void Oval::show() {
	cout << width << "," << height << endl;
}
Oval::Oval() { height = 1; width = 1; }
Oval::Oval(int w, int h) {
	width = w; height = h;
}
Oval::~Oval() {
	cout << "Oval finish : width = " << width << "," << "height = " << height << endl;
}