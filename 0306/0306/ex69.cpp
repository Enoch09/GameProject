#include<iostream>
using namespace std;
class Circle {
	int radius;
public:
	void setRadius(int r);
	int getRadius();
	double getArea();
};

void Circle::setRadius(int r) {
	radius = r;
}
int Circle::getRadius() {
	return radius;
}
double Circle::getArea() {
	return radius * radius*3.14;
}

int main() {
	int n,r, cnt=0;
	Circle *p;

	cout << "Number of Circle>> ";
	cin >> n;
	p = new Circle[n]; // n개 크기의 배열을 동적으로 할당

	for (int x = 0; x < n; x++){
		
		cout << "Circle " << x + 1 << " radius";
		cin >> r;
		p[x].setRadius(r);
	}
	for (int y = 0; y < n; y++) {
		
		if ( p[y].getArea() > 100) {
			cnt++;
		}

	}

	cout << "result: " << cnt << endl;

}