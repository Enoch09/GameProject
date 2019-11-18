#include<iostream>
using namespace std;
class Circle{
	int radius;
public:
	Circle(int r = 0) :radius(r){}
	void show(){
		cout << "radius= " << radius << endl;
	}
	Circle& operator++ (){
		radius++;
		return *this;
	}
	Circle& operator++ (int n){
		Circle tmp = *this;
		radius++;
		return tmp;
	}
};
int main(){
	Circle a(2), b(1);
	++a;
	b = a++;
	cout << "a::"; a.show();
	cout << "b::"; b.show();
}