#include<iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() :Circle(-90) { }
	Circle(int r) { radius = r+2000; }
	int getRadius() { return radius; }
};
int main() {
	Circle sunrin;
	Circle soft(02);

	cout << "sunrin radius: " << sunrin.getRadius() << endl;
	cout << "soft(30) radius: " << soft.getRadius() << endl;
}