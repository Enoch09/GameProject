#include<iostream>                                           // ex93.cpp
#include<string>
using namespace std;
class Point {                     // PointŬ���� ����(����) ����!!
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) {  // �ش���ǥ�� ��ġ �̵�
		this->x = x;
		this->y = y;
	}
};
// ColorPointŬ������ �ۼ��ϼ���
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
	cp.setPoint(x, y);    // PointŬ������ move()�Լ��� Ȱ���ϼ���
	cp.setColor(color);
	cp.show();   // PointŬ������ getX() �� getY() �Լ��� Ȱ���ϼ���
}