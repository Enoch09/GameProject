#include<iostream>
using namespace std;
class Rect {
	int w, h;
public:
	Rect() { this->w = this->h = 0; }
	Rect(int w, int h) {
		this->w = w;
		this->h = h;
	}
	void show();

};
void Rect::show() {
	cout << this->w << this->h << endl;
}
int main() {
	Rect obj1, obj2(3, 4);
	obj1.show();
	obj2.show();
}