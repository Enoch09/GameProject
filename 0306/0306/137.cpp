#include<iostream>
using namespace std;
class Point{
	int x;
public:
	Point(int x = 0){ this->x = x; }
	void show(){ cout << "x=" << x << endl; }
	//++a (����++������)
	Point& operator++ (){
		x++;
		return *this;
	}
	//a++ (����++������)
	Point& operator++ (int n){
		Point tmp = *this;
		x++;
		return tmp;
	}
};
int main(){
	Point a(1);
	++(++a);
	Point b = a++;
	cout << "a: "; a.show();
	cout << "b: "; b.show();
}