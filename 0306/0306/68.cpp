#include<iostream>
using namespace std;
class Color {
	int red, blue, green;
public:
	Color() {
		red = green = blue = 0;
	}
	Color(int red, int green, int blue) {
		this->red = red;
		this->blue = blue;
		this->green = green;
	}
	void setColor(int r, int g, int b) {
		red = r; blue = b; green = g;
	}
	void show() {
		cout << red << " " << green << " " << blue << endl;
	}
};

int main() {
	Color test(255, 0, 0);
	Color *p;
	p = &test;
	p->show();
	Color arr[3];
	p = arr;
	p[0].setColor(255,0,0);
	(p + 1)->setColor(0, 255, 0);
	(*(p + 2)).setColor(0, 0, 255);
	for (int x=0; x < 3; x++) {
		p[x].show();
	}
}