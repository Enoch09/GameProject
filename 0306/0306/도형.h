#include<iostream>
using namespace std;
class ����{
	int x, y;
public:
	����::����(){ cout << "shape const."; }
	void ����::setX(int x){ this->x = x; }
	int ����::getX(){ return x; }
};