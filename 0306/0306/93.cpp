#include<iostream>                                           // ex93.cpp
#include<string>
using namespace std;
class Point {                     // Point클래스 수정(변경) 금지!!
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) {  // 해당좌표로 위치 이동
		this->x = x;
		this->y = y;
	}
};
// ColorPoint클래스를 작성하세요
class ColorPoint : public Point{
	string color;
public:
	ColorPoint(int x, int y, string color):Point(x,y) {
		this->color = color;
	}
	void setPoint(int x, int y){
		move(x, y);
	}
	void setColor(string color){
		this->color = color;
	}
	void show(){
		cout << "Input: " << color << endl;
		cout << "x: " << getX() << endl;
		cout << "y: " << getY() << endl;
	}
};
int main() {
	int x, y;
	string color;
	ColorPoint cp(0, 0, "WHITE");
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "Input color: ";
	cin >> color;
	cp.setPoint(x, y);    // Point클래스의 move()함수를 활용하세요
	cp.setColor(color);
	cp.show();   // Point클래스의 getX() 및 getY() 함수를 활용하세요
}