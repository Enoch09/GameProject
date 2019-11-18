#include<iostream>
using namespace std;
class Rect{
	friend class RectManager;
	int width, height;
public:
	Rect(int w, int h) :width(w), height(h){};
};
class RectManager{
public:
	bool equals(Rect a, Rect b)
	{
		return a.width == b.width&&
			a.height == b.height;
	}
	void copy(Rect& dest, Rect& scr)
	{
		
	}
};

int main(){
	Rect a(3, 4), b(5, 6);
	RectManager sunrin;
	sunrin.copy(b, a);
	if (sunrin.equals(a, b))cout << "equal" << endl;
	else cout << "not equal" << endl;
}