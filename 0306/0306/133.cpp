#include<iostream>
#include<string>
using namespace std;
class Shape{
	string name;
protected:
	int width, height;
public:
	Shape(string n, int w, int h)
		:name(n), width(w), height(h){}
	virtual double getArea() = 0;
	string getName(){ return name; }
};
//Rect클래스작성 (Shape클래스를상속받을것)
class Rect : public Shape{
public:
	Rect(string n, int w, int h):Shape(n,w,h){

	}
	double getArea(){
		return width*height;
	}
};
//Tri클래스작성 (Shape클래스를상속받을것)
class Tri : public Shape{
public:
	Tri(string n, int w, int h) :Shape(n, w, h){

	}
	double getArea(){
		return width*height / 2;
	}
};
int main(){
	Shape*p[4];
	p[0] = new Rect("rectangle", 10, 20);
	p[1] = new Tri("triangle", 30, 40);
	p[2] = new Tri("triangle", 50, 60);
	p[3] = new Rect("rectangle", 70, 80);
	for (int x = 0; x<4; x++){
		cout << p[x]->getName() << "area:";
		cout << p[x]->getArea() << endl;
	}
	for (int x = 0; x<4; x++)delete p[x];
}