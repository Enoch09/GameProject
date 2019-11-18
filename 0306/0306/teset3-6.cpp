#include<iostream>
using namespace std;
class Rectangle {
	int width,height;
public:
	Rectangle();
	Rectangle(int a,int b);
	Rectangle(int a);
	bool isSquare(){ 
		if (width = height) {
			return true;
		}
		else
			return false;
	}
};
Rectangle::Rectangle() {
	width = 1; height = 1;
}
Rectangle::Rectangle(int a, int b) {
	width = a; height = b;
}
Rectangle::Rectangle(int a) {
	width = a; height = a;
}
int main() {
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);

	if (rect1.isSquare())cout << "rect1issquare." << endl;
	if (rect2.isSquare())cout << "rect2issquare." << endl;
	if (rect3.isSquare())cout << "rect3issquare.." << endl;
}

