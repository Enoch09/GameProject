#include<iostream>
#include<string>
using namespace std;
class Circle{
	int radius;
public:
	Circle(int radius = 0){
		this->radius = radius;
	}
	int getRadius(){
		return radius;
	}
	void setRadius(int radius){
		this->radius = radius;
	}
	double getArea(){
		return 3.14*radius*radius;
	}
};

class NameCircle : public Circle{
	string name;
public:
	
	NameCircle(int radius, string name){
		this->setRadius(radius);
		this->name = name;
	}
	void show(){
		cout << "name: " << name << endl;
		cout << "radius: " << getRadius() << endl;
		cout << "area: " << getArea() << endl;
	}

};

int main(){
	int r;
	NameCircle sunrin(0, "sunrin");
	cout << "Input radius: ";
	cin >> r;
	sunrin.setRadius(r);
	sunrin.show();
	
}