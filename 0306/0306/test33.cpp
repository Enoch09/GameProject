#include<iostream>
using namespace std;
class Tower {
	int h;
public:
	Tower();
	Tower(int a);
	int getHeight();
};
int main() {
	Tower myTower;
	Tower urTower(10);
	cout << "Height: " << myTower.getHeight() << "m" << endl;
	cout << "Height: " << urTower.getHeight() << "m" << endl;
}
Tower::Tower() {
	h = 1;
}
Tower::Tower(int a) {
	h = a;
}
int Tower::getHeight()  { return h; }