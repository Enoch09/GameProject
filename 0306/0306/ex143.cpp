#include<iostream>
using namespace std;
class Color{
	int red, green, blue;
public:
	Color(int r = 0, int g = 0, int b = 0)
		:red(r), green(g), blue(b){}
	void show(){
		cout << red << " " << green << " " << blue << endl;
	}
	Color operator+(Color x){
		Color tmp;
		tmp.red = red + x.red;
		tmp.blue = blue + x.blue;
		tmp.green = green + x.green;

		return tmp;
	}
	friend bool operator==(Color, Color);
};
bool operator==(Color a, Color b){
		if (a.red == b.red&&a.blue == b.blue&&a.green==b.green){
			return true;
		}
		else
			return false;
	}
int main(){
	Color red(255, 0, 0), blue(0, 0, 255), green(0, 255, 0), c;
	c = red + green + blue;
	c.show();
	Color black(255, 255, 255);
	if (c == black)cout << "black";
	else cout << "not black";
}