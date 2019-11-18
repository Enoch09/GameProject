#include<iostream>
using namespace std;
class 도형{
	int x, y;
public:
	도형::도형(){ cout << "shape const."; }
	void 도형::setX(int x){ this->x = x; }
	int 도형::getX(){ return x; }
};