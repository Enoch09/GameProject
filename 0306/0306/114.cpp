#include<iostream>
#include<string>
using namespace std;
class Point {
	int x, y;
public:
	void setXY(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class ColorPoint : public Point {
	string color;
public:
	void setColor(string c) { color = c; }
	void showColorPoint() {
		cout << color << ": ";
		showPoint();
	}
};
int main() {
	ColorPoint cp;
	ColorPoint *pChild;
	Point *pParent = &cp; // 업캐스팅
	pParent->setXY(4, 5);
	pParent->showPoint();
	pChild = (ColorPoint *)pParent; // 다운캐스팅
	pChild->setColor("Black");
	pChild->showColorPoint();
}