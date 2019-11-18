#include<iostream>
using namespace std;
struct Circle {
	int r;
	Circle() :Circle(0) { //r = 0; cout << "Circle " << r << "is created" << endl; 
	}

	Circle(int a) { r = a; cout << "Circle " << r << "is created" << endl; }
	~Circle() { cout << "Circle " << r << "is destroyed" << endl; }
	void setR(int _r) { r = _r; }
	int getR() { return r; }
};
int main() {
	Circle array[2][3];
	array[0][0].setR(1), array[0][1].setR(2), array[0][2].setR(3);
	array[1][0].setR(11), array[1][1].setR(22), array[1][2].setR(33);
	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 3; y++) {
			cout << "arr[" << x << "][" << y << "]=" << array[x][y].getR();
			cout << "\n";
		}
	}

}