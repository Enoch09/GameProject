#include<iostream>
using namespace std;
class Point{
	int x;
public:
	Point(int x = 0){ this->x = x; }
	void show(){ cout << "x=" << x << endl; }
	//++a (전위++연산자)
	Point& operator++ (){
		x++;
		return *this;
	}
	//a++ (후위++연산자)
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