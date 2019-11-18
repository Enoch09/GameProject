#include<iostream>
using namespace std;
class Circle {
	int radius=1;
public:
	double getArea() {
		return radius * radius*3.14;
	}

};
int main() {
	Circle obj;
	cout << "obj area " << obj.getArea() << endl;
	Circle *p=&obj;
	//p = &obj;
	cout << "p area " << (*p).getArea() << endl;
}