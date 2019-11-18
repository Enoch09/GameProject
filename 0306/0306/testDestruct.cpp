#include<iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int);
	~Circle() {
		cout << "i am bread"<< radius << endl;
	}
	void setRadius(int);
	double getArea();
};
Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14*radius*radius;
}
int main() {
	Circle pizza;
	Circle ball(10);
	cout << "pizza: " << pizza.getArea() << endl;
	cout << "ball: " << ball.getArea() << endl;

}