#include<iostream>
using namespace std;
struct Circle{
	int r;
	Circle() :Circle(0) { //r = 0; cout << "Circle " << r << "is created" << endl; 
	}

	Circle(int a) { r = a; cout << "Circle " << r << "is created" << endl; }
	~Circle(){ cout << "Circle " << r << "is destroyed" << endl; }
};
int main() {
	Circle arr[3] = { Circle(),Circle(1),Circle(2) };
	Circle *p = arr;
	for (int i = 0; i < 3; i++) {
		cout << p->r << endl;
		p++;
	}




	/*int n = 10;
	int *p = &n;
	cout <<"p= "<< *p << endl;
	Circle obj;
	Circle *cp = &obj;
	cout << "obj.r= " << obj.r << endl;
	cout << "cp.r= " << (*cp).r << endl;
	cout << "cp.r= " << cp->r << endl;*/
	//Circle ban[3] = { Circle(1),Circle(2),Circle(3) };
	/*int arr[5] = { 1,2,3,4,5 };
	int *p = arr;
	p++; p++;
	cout << "arr[2]: " << arr[2] << endl;
	cout << "p[0]: " << p[0] << endl;
	cout << "*p: " << *p << endl;
	cout << "*arr[0]: " << *(arr+2) << endl;*/



}