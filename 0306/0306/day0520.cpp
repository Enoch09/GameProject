#include<iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius=1; cout << "Default Circle is created." << endl; }
	Circle(int r) { radius=r; cout << "Circle("<< radius<<") is created." << endl; }
	~Circle() { cout << "Circle(" << radius << ") is destroyed." << endl; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
};
int main() {
	//Circle var;//1
	//Circle var2();//¾ÈµÊ
	//Circle *pVar = new Circle;//2
	//Circle *pVar1 = new Circle();//3
	//cout << pVar->getRadius() << endl;

	Circle *p = new Circle[3];
	p[0].setRadius(1);
	p[1].setRadius(2);
	p[2].setRadius(3);
	for (int x = 0; x < 3; x++) {
		cout << (x+p)->getRadius() << endl;
		//cout << p[x].getRadius() << endl;
	}
	delete []p;
}