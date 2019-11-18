#include<iostream>
using namespace std;
class Shape{
protected:
	int width, height;
public:
	Shape(int w, int h) :width(w), height(h){}
	virtual int getArea(){ return 0; }
};
//RectŬ������TriŬ�����ۼ�:getArea()�Լ��������̵� �����Ұ�
class Rect :public Shape{
public:
	Rect(int x, int y) :Shape(x,y){

	}
	int getArea(){
		return width*height;
	}
};
class Tri : public Shape{
public:
	Tri(int x, int y) : Shape(x,y){
		
	}
	int getArea(){
		return width*height/2;
	}
};
int main(){
	Shape*p[3] = { new Shape(0, 0), new Rect(10, 20), new Tri(30, 40) };
	for (int x = 0; x <3; x++)
		cout << "area:" << p[x]->getArea() << endl;
}